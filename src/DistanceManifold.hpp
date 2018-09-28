#ifndef _DISTANCE_MANIFOLD_HPP_
#define _DISTANCE_MANIFOLD_HPP_

#include "Helpers.hpp"
#include <vector>
#include <utility>
#include <map>
#include <functional>
#include <memory>


using namespace Eigen;
namespace distances_manifold{

  class DistanceManifold{
  // protected:
    // const std::shared_ptr<const MatrixXd> _Sigma;
    // std::map<std::string,std::function<double(const MatrixXd&, const MatrixXd&)>> distances;
  public:
    virtual double compute_distance(const MatrixXd&, const MatrixXd&) const = 0;
  };


  class Frobenius : public DistanceManifold{
  public:
    double compute_distance(const MatrixXd&, const MatrixXd& ) const override;
    };

  class LogEuclidean : public DistanceManifold{
  public:
    double compute_distance(const MatrixXd&, const MatrixXd& ) const override;
  };

  class SqRoot : public DistanceManifold{
  public:
    double compute_distance(const MatrixXd&, const MatrixXd& ) const override;
  };





}



#endif