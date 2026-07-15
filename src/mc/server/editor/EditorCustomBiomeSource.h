#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/source/ICustomBiomeSource.h"

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

class EditorCustomBiomeSource : public ::ICustomBiomeSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk9cdd9a;
    ::ll::UntypedStorage<8, 8>   mUnk9d5890;
    ::ll::UntypedStorage<8, 32>  mUnk7296a9;
    ::ll::UntypedStorage<8, 72>  mUnk26f72b;
    ::ll::UntypedStorage<8, 8>   mUnka2ce92;
    ::ll::UntypedStorage<8, 912> mUnkc05818;
    ::ll::UntypedStorage<8, 16>  mUnk60714b;
    ::ll::UntypedStorage<8, 16>  mUnk6d7cb9;
    ::ll::UntypedStorage<8, 8>   mUnkcebfae;
    ::ll::UntypedStorage<2, 4>   mUnk204914;
    ::ll::UntypedStorage<4, 4>   mUnkab95a5;
    ::ll::UntypedStorage<8, 48>  mUnk9c0f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorCustomBiomeSource& operator=(EditorCustomBiomeSource const&);
    EditorCustomBiomeSource(EditorCustomBiomeSource const&);
    EditorCustomBiomeSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::UUID const& getId() /*override*/;

    virtual ::BiomeRegistry& getRegistry() /*override*/;

    virtual ::BiomeSource& getSource() /*override*/;

    virtual ::Biome const* getBiomeAtLocation(::BlockPos const&) const /*override*/;

    virtual ::std::optional<::mce::Color> findColorIfCustomBiome(::Biome const*) const /*override*/;

    virtual void recalculateBiomes(::std::map<::std::string, ::CustomBiome> const&) /*override*/;

    virtual void updateColor(::std::string const&, ::mce::Color const&) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForBiomeUpdates(::std::function<void()>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
