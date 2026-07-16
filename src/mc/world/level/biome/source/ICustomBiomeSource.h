#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class BiomeSource;
class BlockPos;
struct CustomBiome;
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ICustomBiomeSource : public ::EnableGetWeakRef<::ICustomBiomeSource> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICustomBiomeSource() = default;

    virtual ::mce::UUID const& getId() = 0;

    virtual ::BiomeRegistry& getRegistry() = 0;

    virtual ::BiomeSource& getSource() = 0;

    virtual ::Biome const* getBiomeAtLocation(::BlockPos const&) const = 0;

    virtual ::std::optional<::mce::Color> findColorIfCustomBiome(::Biome const*) const = 0;

    virtual void recalculateBiomes(::std::map<::std::string, ::CustomBiome> const&) = 0;

    virtual void updateColor(::std::string const&, ::mce::Color const&) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForBiomeUpdates(::std::function<void()>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
