#pragma once

#include "ISubInterfaceA.h"

namespace globProjectNS
{
  namespace subCompA_NS
  {
    class SubBaseClassA : public ISubInterfaceA
    {
    public:
      SubBaseClassA();
      virtual ~SubBaseClassA() = default;

      virtual void exampleFunction2(int paramIn) override;
      virtual int exampleFunction3(int* paramOut) override;
      virtual void exampleSubFunctionA() override;
    };
  }
}