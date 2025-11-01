#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

struct BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    struct Compound;
    // clang-format on

    // BlockDescriptor inner types define
    struct Compound {
    public:
        // Compound inner types define
        enum class Type : int {
            None    = 0,
            String  = 1,
            Integer = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc646ba;
        ::ll::UntypedStorage<4, 4>  mUnk92457e;
        ::ll::UntypedStorage<4, 4>  mUnk531751;
        // NOLINTEND

    public:
        // prevent constructor by default
        Compound& operator=(Compound const&);
        Compound(Compound const&);
        Compound();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void fromBool(bool b);

        MCNAPI void fromInt(int i);

        MCNAPI void fromString(::std::string str);

        MCNAPI ~Compound();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk72182e;
    ::ll::UntypedStorage<8, 16> mUnk56182c;
    ::ll::UntypedStorage<8, 32> mUnk91726d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptor(BlockDescriptor const&);
    BlockDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor&&);

    MCNAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor&&);

    MCNAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
