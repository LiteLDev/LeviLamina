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
        ::ll::TypedStorage<8, 32, ::std::string>                                         mString;
        ::ll::TypedStorage<4, 4, int>                                                    mInt;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::BlockDescriptor::Compound::Type> mType;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void fromBool(bool b);

        MCAPI void fromInt(int i);

        MCAPI void fromString(::std::string str);

        MCAPI ~Compound();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptor(BlockDescriptor const&);
    BlockDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor&&);

    MCAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor&&);

    MCAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor const&);

    MCAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
