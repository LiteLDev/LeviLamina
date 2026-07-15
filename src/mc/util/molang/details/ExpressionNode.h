#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/MolangCompileResult.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct MolangParseConfig;
namespace Json { class Value; }
namespace Molang::details { class Program; }
// clang-format on

namespace Molang::details {

class ExpressionNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkf560f0;
    ::ll::UntypedStorage<4, 4> mUnk4e6e98;
    ::ll::UntypedStorage<4, 4> mUnk56c08e;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 88> mUnka6816f;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 96> mUnka6816f;
#endif
    ::ll::UntypedStorage<8, 24> mUnk731c4e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);
    ExpressionNode(ExpressionNode const&);
    ExpressionNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI ::nonstd::expected<::Molang::details::Program, ::MolangCompileResult> link(::MolangVersion version);

    MCNAPI ::Molang::details::ExpressionNode& operator=(::Molang::details::ExpressionNode&& rhs);

    MCNAPI bool operator==(::Molang::details::ExpressionNode const& rhs) const;

    MCNAPI bool parse(
        ::std::string_view            inputExpression,
        ::MolangParseConfig const&    config,
        ::brstd::bitset<109, uint64>& usedTokenFlags
    );

    MCNAPI bool
    parse(::Json::Value const& value, ::MolangParseConfig const& config, ::brstd::bitset<109, uint64>& usedTokenFlags);

    MCNAPI void replaceArrayVariables(::std::unordered_map<::HashedString, ::Molang::details::ExpressionNode>& dataMap);

#ifdef LL_PLAT_C
    MCNAPI ::brstd::flat_set<::HashedString, ::std::less<::HashedString>, ::std::vector<::HashedString>>
    replaceResourceVariables(::std::unordered_map<::HashedString, ::ExpressionNode::ResourceReference>& resourceTable);
#endif

    MCNAPI void validateArrayVariables() const;

    MCNAPI ~ExpressionNode();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
