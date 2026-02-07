#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class ParticleEffect; }
// clang-format on

class ParticleEffectInfo : public ::std::enable_shared_from_this<::ParticleEffectInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                      mName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                      mContainerName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ParticleSystem::ParticleEffect>> mPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ParticleSystem::ParticleEffect> getEffectPtr();

    MCAPI ~ParticleEffectInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
