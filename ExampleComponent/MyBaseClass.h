#pragma once

#include "IMyInterface.h"

namespace globProjectNS
{
  /*! \class MyBaseClass MyBaseClass.h "MyBaseClass.h"
  *   \brief This is the main base class.
  *
  *  Some details about the main base class.
  */
  class MyBaseClass : public IMyInterface
  {
  public:
    //! Default destructor
    virtual ~MyBaseClass() = default;

    virtual void exampleFunction1() override;
  };
}