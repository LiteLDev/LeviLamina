#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/Structure.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct JigsawStructure : public ::br::worldgen::Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk42e662;
    ::ll::UntypedStorage<8, 32> mUnkfee9be;
    ::ll::UntypedStorage<1, 1>  mUnkcef2bc;
    ::ll::UntypedStorage<8, 56> mUnkd84b51;
    ::ll::UntypedStorage<4, 4>  mUnk449e9c;
    ::ll::UntypedStorage<4, 8>  mUnk5771aa;
    ::ll::UntypedStorage<1, 1>  mUnk750b60;
    ::ll::UntypedStorage<1, 1>  mUnk8c5cbf;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructure& operator=(JigsawStructure const&);
    JigsawStructure(JigsawStructure const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext& context) const /*override*/;

    // vIndex: 0
    virtual ~JigsawStructure() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawStructure();

    MCAPI JigsawStructure(::br::worldgen::JigsawStructure&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::br::worldgen::JigsawStructure&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::GenerationStub>
    $findValidGenerationPoint(::br::worldgen::GenerationContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
