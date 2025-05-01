#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ExpressionNode {
public:
    // ExpressionNode inner types declare
    // clang-format off
    struct StringRepresentation;
    // clang-format on

    // ExpressionNode inner types define
    struct StringRepresentation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkbe3c14;
        ::ll::UntypedStorage<2, 2>  mUnk31d04e;
        // NOLINTEND

    public:
        // prevent constructor by default
        StringRepresentation(StringRepresentation const&);
        StringRepresentation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation&&);

        MCNAPI ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation const&);

        MCNAPI ~StringRepresentation();
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
    ::ll::UntypedStorage<8, 48> mUnk59a1d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExpressionNode();

    MCNAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode&&);

    MCNAPI ExpressionNode(::std::string string, short molangVersion);

    MCNAPI ::SharedTypes::Legacy::ExpressionNode& operator=(::SharedTypes::Legacy::ExpressionNode&&);

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode&&);

    MCNAPI void* $ctor(::std::string string, short molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
