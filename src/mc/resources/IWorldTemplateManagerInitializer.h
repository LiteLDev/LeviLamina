#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateManagerInitData;
struct WorldTemplateManagerInitDeps;
// clang-format on

class IWorldTemplateManagerInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTemplateManagerInitializer() = default;

    virtual ::WorldTemplateManagerInitData buildInitData() = 0;

    virtual ::WorldTemplateManagerInitDeps& getInitDeps() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::std::unique_ptr<::IWorldTemplateManagerInitializer> create(::WorldTemplateManagerInitDeps&& deps);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
