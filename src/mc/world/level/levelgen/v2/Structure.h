#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk20a705;
    ::ll::UntypedStorage<8, 24> mUnk61e6e0;
    ::ll::UntypedStorage<8, 32> mUnk25e7b0;
    ::ll::UntypedStorage<8, 64> mUnkfdb371;
    ::ll::UntypedStorage<1, 1>  mUnkc45736;
    ::ll::UntypedStorage<8, 48> mUnk38a2bb;
    ::ll::UntypedStorage<8, 24> mUnk2df662;
    // NOLINTEND

public:
    // prevent constructor by default
    Structure& operator=(Structure const&);
    Structure();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Structure();

    // vIndex: 1
    virtual ::std::optional<::br::worldgen::GenerationStub>
    findValidGenerationPoint(::br::worldgen::GenerationContext&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Structure(::br::worldgen::Structure const&);

    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance> generate(::br::worldgen::GenerationContext& context
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::Structure const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
