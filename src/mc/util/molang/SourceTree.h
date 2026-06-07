#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangParseConfig;
struct MolangScriptArg;
namespace Bedrock { class StaticOptimizedString; }
namespace Json { class Value; }
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class IComplexExpression; }
// clang-format on

namespace Molang::details {

class SourceTree {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 128> mUnk23c850;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 136> mUnk23c850;
#endif
    ::ll::UntypedStorage<8, 8> mUnk640833;
    ::ll::UntypedStorage<4, 4> mUnkcb966c;
    ::ll::UntypedStorage<2, 2> mUnk4771d0;
    ::ll::UntypedStorage<1, 1> mUnk65ee2d;
    ::ll::UntypedStorage<1, 1> mUnk4d1a0b;
    // NOLINTEND

public:
    // prevent constructor by default
    SourceTree& operator=(SourceTree const&);
    SourceTree(SourceTree const&);
    SourceTree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SourceTree(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);

    MCNAPI SourceTree(::Json::Value const& value, ::MolangParseConfig const& config);

    MCNAPI ::Bedrock::StaticOptimizedString const& getExpressionString() const;

    MCNAPI ::MolangCompileResult getLastCompileResult() const;

    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI ::ExpressionOp getOp() const;

#ifdef LL_PLAT_C
    MCNAPI ::Molang::details::ExpressionNode const& getRoot() const;
#endif

    MCNAPI ::std::optional<::MolangScriptArg> getValueIfConstant() const;

#ifdef LL_PLAT_S
    MCNAPI bool hasVariableAssignments() const;

    MCNAPI bool isInitialized() const;

    MCNAPI bool isValid() const;
#endif

    MCNAPI bool preserveSource() const;

    MCNAPI void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

#ifdef LL_PLAT_C
    MCNAPI ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>
    replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);
#endif

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~SourceTree();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::Molang::details::IComplexExpression> link(::Molang::details::SourceTree root);

    MCNAPI static ::Molang::details::SourceTree parse(::std::string_view expression, ::MolangParseConfig const& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);

    MCNAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
