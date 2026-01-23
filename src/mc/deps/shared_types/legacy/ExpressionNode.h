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
        ::ll::TypedStorage<8, 32, ::std::string> mValue;
        ::ll::TypedStorage<2, 2, short>          mMolangVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        StringRepresentation(StringRepresentation const&);
        StringRepresentation();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation&&);

        MCFOLD ::SharedTypes::Legacy::ExpressionNode::StringRepresentation&
        operator=(::SharedTypes::Legacy::ExpressionNode::StringRepresentation const&);

        MCAPI ~StringRepresentation();
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
    ::ll::TypedStorage<8, 48, ::std::variant<::SharedTypes::Legacy::ExpressionNode::StringRepresentation, float>>
        mExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExpressionNode();

    MCAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode&&);

    MCAPI ExpressionNode(::SharedTypes::Legacy::ExpressionNode const&);

    MCAPI ExpressionNode(::std::string string, short molangVersion);

    MCAPI ::SharedTypes::Legacy::ExpressionNode& operator=(::SharedTypes::Legacy::ExpressionNode&&);

    MCAPI ~ExpressionNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode&&);

    MCAPI void* $ctor(::SharedTypes::Legacy::ExpressionNode const&);

    MCAPI void* $ctor(::std::string string, short molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
