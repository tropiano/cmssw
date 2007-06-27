#ifndef RecoCandidate_FitQuality_h
#define RecoCandidate_FitQuality_h
/** \class reco::FitQuality
 *
 * structure containg fit quality
 *
 * \author Luca Lista, INFN
 *
 * \version $Id: RecoCandidate.h,v 1.20 2007/04/02 13:35:15 llista Exp $
 *
 */

#include "Rtypes.h"

namespace reco {

  class FitQuality {
  public:
    /// default constructor
    FitQuality() { }
    /// constructor form values
    FitQuality( double chi2, double ndof ) :
      chi2_( chi2 ), ndof_( ndof ) { }
    /// chi-squared
    double chi2() const { return chi2_; }
    /// number of degrees of freedom
    double ndof() const { return ndof_; }
    /// normalized chi-squared
    double normalizedChi2() const { return chi2_ / ndof_; }

  private:
    Double32_t chi2_;
    Double32_t ndof_;
  };

}

#endif
