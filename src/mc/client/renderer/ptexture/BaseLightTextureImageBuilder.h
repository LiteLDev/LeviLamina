#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
class Dimension;
class IClientInstance;
// clang-format on

class BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension const*> mDimension;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseLightTextureImageBuilder() = default;

    // vIndex: 1
    virtual void init(::Dimension*);

    // vIndex: 2
    virtual ::std::unique_ptr<::BaseLightData> createBaseLightTextureData(::IClientInstance*, ::BaseLightData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
