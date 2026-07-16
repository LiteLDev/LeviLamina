#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangParseConfig;
namespace Molang::details { class ExpressionNode; }
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Molang::details::ExpressionNode node, ::MolangParseConfig const& parseConfig);
    // NOLINTEND
};

} // namespace Molang::details
