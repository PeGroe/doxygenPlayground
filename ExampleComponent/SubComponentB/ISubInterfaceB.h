#pragma once

#include "../MyBaseClass.h"

namespace globProjectNS
{
  namespace subCompB_NS
  {
    class ISubInterfaceB : public MyBaseClass
    {
    public:
      virtual ~ISubInterfaceB() = default;

      virtual void exampleSubFunctionB() = 0;
    };
  }
}