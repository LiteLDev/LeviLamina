#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/AssertDialogResponse.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI bool breakpadSetupFailed();
#endif

MCNAPI bool
handleAssert_va(char const* msgFormat, char const* arg, int line, char const* file, char const* function, char* args);

MCNAPI bool isDebuggerAttached();

MCNAPI bool runAssertHandler(::std::bitset<7> const& steps, ::AssertHandlerContext const& context);

#ifdef LL_PLAT_C
MCNAPI void
    setModalDialogPresenter(::AssertDialogResponse (*modalDialogPresenter)(::std::string const&, ::std::string const&));

MCNAPI void setShouldDebugBreak(bool x);

MCNAPI void setShouldPresentDialog(bool x);
#endif

MCNAPI void setThreadName(::std::string const& name);
// NOLINTEND

} // namespace DebugUtils
