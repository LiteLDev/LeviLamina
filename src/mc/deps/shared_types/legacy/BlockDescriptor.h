#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        MCNAPI void fromString(::std::string str);

        MCNAPI ~Compound();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string>                                                               mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI explicit BlockDescriptor(::std::string name);

    MCNAPI BlockDescriptor(
        ::std::string                                                               name,
        ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound> states,
        ::std::string                                                               tags
    );

    MCNAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor&&);

    MCNAPI ::SharedTypes::Legacy::BlockDescriptor& operator=(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor const&);

    MCNAPI void* $ctor(::std::string name);

    MCNAPI void* $ctor(
        ::std::string                                                               name,
        ::std::map<::std::string, ::SharedTypes::Legacy::BlockDescriptor::Compound> states,
        ::std::string                                                               tags
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
