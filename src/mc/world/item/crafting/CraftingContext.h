#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // CraftingContext inner types define
    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        // symbol: ??0Impl@CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
        MCAPI explicit Impl(Bedrock::NotNullNonOwnerPtr<class ILevel> level);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const&);
    CraftingContext(CraftingContext const&);
    CraftingContext();

public:
    // NOLINTBEGIN
    // symbol: ??0CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
    MCAPI explicit CraftingContext(Bedrock::NotNullNonOwnerPtr<class ILevel> level);

    // symbol: ?getBaseGameVersion@CraftingContext@@QEBA?AVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion getBaseGameVersion() const;

    // symbol: ?getTrimMaterialRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimMaterialRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimMaterialRegistry const> const getTrimMaterialRegistry() const;

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry const> const getTrimPatternRegistry() const;

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEAA?BV?$weak_ptr@VTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry> const getTrimPatternRegistry();

    // symbol: ??1CraftingContext@@QEAA@XZ
    MCAPI ~CraftingContext();

    // NOLINTEND
};
