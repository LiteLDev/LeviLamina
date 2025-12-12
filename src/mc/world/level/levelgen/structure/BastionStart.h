#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Random;
// clang-format on

class BastionStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc60024;
    // NOLINTEND

public:
    // prevent constructor by default
    BastionStart& operator=(BastionStart const&);
    BastionStart(BastionStart const&);
    BastionStart();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BastionStart() /*override*/ = default;

    virtual bool isValid() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BastionStart(::Dimension& generator, ::Random& random, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Dimension& generator, ::Random& random, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI ::std::string_view $getStructureName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
