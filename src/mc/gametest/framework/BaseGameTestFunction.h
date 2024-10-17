#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace gametest {

class BaseGameTestFunction {
public:
    // prevent constructor by default
    BaseGameTestFunction& operator=(BaseGameTestFunction const&);
    BaseGameTestFunction(BaseGameTestFunction const&);
    BaseGameTestFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestFunction();

    // vIndex: 1
    virtual std::unique_ptr<class gametest::IGameTestFunctionContext>
    createContext(class gametest::BaseGameTestHelper& helper) const = 0;

    // vIndex: 2
    virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult>
    run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext& fnContext) const = 0;

    MCAPI BaseGameTestFunction(
        std::string              batchName,
        std::string              testName,
        std::string              structureName,
        int                      maxTicks,
        int                      setupTicks,
        int                      padding,
        bool                     rotate,
        bool                     required,
        int                      requiredSuccesses,
        int                      attempts,
        std::vector<std::string> tags
    );

    MCAPI bool getRotate() const;

    MCAPI std::string const& getTestName() const;

    MCAPI bool hasTag(std::string const& tag) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addTag(std::string tag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string              batchName,
        std::string              testName,
        std::string              structureName,
        int                      maxTicks,
        int                      setupTicks,
        int                      padding,
        bool                     rotate,
        bool                     required,
        int                      requiredSuccesses,
        int                      attempts,
        std::vector<std::string> tags
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
