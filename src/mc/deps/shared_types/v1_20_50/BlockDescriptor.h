#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

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
        ::ll::UntypedStorage<8, 32> mUnk20779d;
        ::ll::UntypedStorage<4, 4>  mUnk1d9369;
        ::ll::UntypedStorage<4, 4>  mUnk623dfc;
        // NOLINTEND

    public:
        // prevent constructor by default
        Compound(Compound const&);
        Compound();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void fromInt(int i);

        MCAPI void fromString(::std::string str);

        MCAPI ::SharedTypes::v1_20_50::BlockDescriptor::Compound&
        operator=(::SharedTypes::v1_20_50::BlockDescriptor::Compound const&);

        MCAPI ~Compound();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
    ::ll::UntypedStorage<8, 32> mUnk4db9f5;
    ::ll::UntypedStorage<8, 16> mUnk229e34;
    ::ll::UntypedStorage<8, 32> mUnk36c06d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDescriptor(::SharedTypes::v1_20_50::BlockDescriptor const&);

    MCAPI ::SharedTypes::v1_20_50::BlockDescriptor& operator=(::SharedTypes::v1_20_50::BlockDescriptor&&);

    MCAPI ::SharedTypes::v1_20_50::BlockDescriptor& operator=(::SharedTypes::v1_20_50::BlockDescriptor const&);

    MCAPI ~BlockDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_20_50::BlockDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
