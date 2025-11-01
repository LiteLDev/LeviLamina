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
    // vIndex: 0
    virtual ~IWorldTemplateManagerInitializer() = default;

    // vIndex: 1
    virtual ::WorldTemplateManagerInitData buildInitData() = 0;

    // vIndex: 2
    virtual ::WorldTemplateManagerInitDeps& getInitDeps() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::IWorldTemplateManagerInitializer> create(::WorldTemplateManagerInitDeps&& deps);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
