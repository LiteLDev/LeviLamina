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
class Dimension;
class LevelSeed64;
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
    ::ll::UntypedStorage<4, 4>   mUnk2c3be6;
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

    virtual ::Biome const* getBiomeAtLocation(::BlockPos const& location) const /*override*/;

    virtual ::std::optional<::mce::Color> findColorIfCustomBiome(::Biome const* biome) const /*override*/;

    virtual void recalculateBiomes(::std::map<::std::string, ::CustomBiome> const& customBiomeMap) /*override*/;

    virtual void updateColor(::std::string const& biomeName, ::mce::Color const& color) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForBiomeUpdates(::std::function<void()> callback) /*override*/;

    virtual ~EditorCustomBiomeSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorCustomBiomeSource(
        ::LevelSeed64                                   seed,
        ::Dimension const&                              dimension,
        ::std::map<::std::string, ::CustomBiome> const& customBiomeMap,
        ::mce::UUID                                     id
    );

    MCNAPI void _rebuildBiomeSource(::std::map<::std::string, ::CustomBiome> const& customBiomeMap);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::map<::std::string, ::mce::Color>
    buildColorMap(::std::map<::std::string, ::CustomBiome> const& customBiomeMap);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::LevelSeed64                                   seed,
        ::Dimension const&                              dimension,
        ::std::map<::std::string, ::CustomBiome> const& customBiomeMap,
        ::mce::UUID                                     id
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::UUID const& $getId();

    MCNAPI ::BiomeRegistry& $getRegistry();

    MCNAPI ::BiomeSource& $getSource();

    MCNAPI ::Biome const* $getBiomeAtLocation(::BlockPos const& location) const;

    MCNAPI ::std::optional<::mce::Color> $findColorIfCustomBiome(::Biome const* biome) const;

    MCNAPI void $recalculateBiomes(::std::map<::std::string, ::CustomBiome> const& customBiomeMap);

    MCNAPI void $updateColor(::std::string const& biomeName, ::mce::Color const& color);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForBiomeUpdates(::std::function<void()> callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
