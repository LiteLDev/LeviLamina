#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
// clang-format on

namespace Bedrock::Resources {

class LoaderRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnk6a1cdf;
    // NOLINTEND

public:
    // prevent constructor by default
    LoaderRegistry& operator=(LoaderRegistry const&);
    LoaderRegistry(LoaderRegistry const&);
    LoaderRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoaderRegistry() = default;

    // vIndex: 1
    virtual ::Puv::Loader<::SharedTypes::v1_20_80::ParticleEffectData> const& getParticleLoader() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Resources
