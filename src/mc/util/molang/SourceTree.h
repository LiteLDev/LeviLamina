#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangParseConfig;
struct MolangScriptArg;
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
    SourceTree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SourceTree(::Molang::details::SourceTree&&);

    MCNAPI SourceTree(::Molang::details::SourceTree const&);

    MCNAPI SourceTree(::Json::Value const& value, ::MolangParseConfig const& config);

    MCNAPI ::std::optional<::MolangScriptArg> getValueIfConstant() const;

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
    MCNAPI void* $ctor(::Molang::details::SourceTree&&);

    MCNAPI void* $ctor(::Molang::details::SourceTree const&);

    MCNAPI_S void* $ctor(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);

    MCNAPI void* $ctor(::Json::Value const& value, ::MolangParseConfig const& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
