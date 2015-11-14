/*********************************************************************
 *                      Atom.h
 *
 *  Copyright 2013-2014 Liam Deacon <liam.m.deacon@gmail.com>
 *
 *  Licensed under GNU General Public License 3.0 or later.
 *  Some rights reserved. See COPYING, AUTHORS.
 *
 * @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
 *
 *********************************************************************/

/*! \file
 * \author Liam Deacon
 * Provides a base class for atom-derived classes.
 */

#ifndef __ATOM_HH__
#define __ATOM_HH__

#ifdef __cplusplus /* use C linkage if this is a C++ compiler */

#include <vector>
#include <cstddef>
#include <string>
#include <iostream>

#include <Core/BaseElement.hh>

using namespace std;

namespace cleed {

  class Atom : public BaseElement {
    public:
      Atom();
      Atom(double x, double y, double z);
      Atom(std::vector<double> pos);
      virtual ~Atom();

      friend std::ostream& operator<<(std::ostream& out, const Atom& atom);

      /* pure virtual functions */
      virtual double getXPosition() const = 0;
      virtual double getYPosition() const = 0;
      virtual double getZPosition() const = 0;
      virtual std::vector<double> getPosition() const = 0;

      virtual Atom& setXPosition(double x_pos) = 0;
      virtual Atom& setYPosition(double y_pos) = 0;
      virtual Atom& setZPosition(double z_pos) = 0;
      virtual Atom& setPosition(std::vector<double> pos) = 0;

    private:
      double x;
      double y;
      double z;
  };

} /* namespace CLEED */

#endif /* __cplusplus */

#endif /* __ATOM_HH__ */
