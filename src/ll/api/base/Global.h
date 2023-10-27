#pragma once

#pragma clang diagnostic ignored "-Wpragma-system-header-outside-header"

#include "ll/api/base/Macro.h"
#include "mc/_HeaderOutputPredefine.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif


// windows types
#include "minwindef.h"

#include "FMT/chrono.h"
#include "FMT/color.h"
#include "FMT/core.h"
#include "FMT/os.h"
#include "FMT/printf.h"
#include "gsl/gsl"

#include "ll/api/memory/MemoryUtils.h"
#include "ll/api/utils/SehTranslator.h"
