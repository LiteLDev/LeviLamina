#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/StructureBuilder.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class JigsawStructureBuilder : public ::br::worldgen::StructureBuilder<::br::worldgen::JigsawStructureBuilder> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkbb5d5d;
    ::ll::UntypedStorage<4, 4>  mUnk506b8f;
    ::ll::UntypedStorage<4, 8>  mUnkc17bb4;
    ::ll::UntypedStorage<8, 32> mUnk9e3220;
    ::ll::UntypedStorage<8, 32> mUnk63ea3e;
    ::ll::UntypedStorage<8, 56> mUnk583b6e;
    ::ll::UntypedStorage<1, 1>  mUnkcd9d57;
    ::ll::UntypedStorage<8, 24> mUnk47f6a0;
    ::ll::UntypedStorage<1, 1>  mUnk8fe22e;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBuilder& operator=(JigsawStructureBuilder const&);
    JigsawStructureBuilder(JigsawStructureBuilder const&);
    JigsawStructureBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawStructureBuilder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructureBuilder(::std::string_view key, ::HashedString type, int maxDistanceFromCenter);

    MCAPI ::br::worldgen::JigsawStructure build();

    MCAPI ::br::worldgen::JigsawStructureBuilder& startPool(::std::string_view key);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view key, ::HashedString type, int maxDistanceFromCenter);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
