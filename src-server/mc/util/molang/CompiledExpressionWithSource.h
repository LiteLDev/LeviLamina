#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/CompiledExpressionWithContentScope.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class Program; }
namespace Molang::details { class SourceTree; }
// clang-format on

namespace Molang::details {

class CompiledExpressionWithSource : public ::Molang::details::CompiledExpressionWithContentScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk36c341;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithSource& operator=(CompiledExpressionWithSource const&);
    CompiledExpressionWithSource(CompiledExpressionWithSource const&);
    CompiledExpressionWithSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::Molang::details::IComplexExpression> clone() const /*override*/;

    // vIndex: 7
    virtual void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap) /*override*/;

    // vIndex: 8
    virtual void validateArrayVariables() const /*override*/;

    // vIndex: 12
    virtual ::ExpressionOp getOp() const /*override*/;

    // vIndex: 13
    virtual bool needsToCompile() const /*override*/;

    // vIndex: 15
    virtual ::Molang::details::SourceTree* getSource() /*override*/;

    // vIndex: 0
    virtual ~CompiledExpressionWithSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompiledExpressionWithSource(::Molang::details::Program program, bool hasVariableAssignments, ::Molang::details::SourceTree source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::Program program, bool hasVariableAssignments, ::Molang::details::SourceTree source);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Molang::details::IComplexExpression> $clone() const;

    MCNAPI void $replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

    MCNAPI void $validateArrayVariables() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI ::Molang::details::SourceTree* $getSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
