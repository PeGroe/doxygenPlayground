#pragma once

#include "../MyBaseClass.h"

namespace globProjectNS
{
  namespace subCompA_NS
  {
    class ISubInterfaceA : public MyBaseClass
    {
    public:
      virtual ~ISubInterfaceA() = default;

      virtual void exampleSubFunctionA() = 0;
    };
  }
}