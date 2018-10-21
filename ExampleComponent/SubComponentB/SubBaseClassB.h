#pragma once

#include "ISubInterfaceB.h"

namespace globProjectNS
{
  namespace subCompB_NS
  {
    class SubBaseClassB : public ISubInterfaceB
    {
    public:
      SubBaseClassB();
      virtual ~SubBaseClassB() = default;

      virtual void exampleFunction2(int paramIn) override;
      virtual int exampleFunction3(int* paramOut) override;
      virtual void exampleSubFunctionB() override;
    };
  }
}