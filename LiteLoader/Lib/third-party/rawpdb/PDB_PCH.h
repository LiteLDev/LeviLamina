// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

// this needs to be the first include, since it determines the platform/toolchain we're compiling for
#include "Foundation/PDB_Platform.h"
#include "Foundation/PDB_Macros.h"
#include "Foundation/PDB_Warnings.h"

// third-party includes
#include "Foundation/PDB_DisableWarningsPush.h"
#include <intrin.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <type_traits>
#include "Foundation/PDB_DisableWarningsPop.h"

// library includes
#include "Foundation/PDB_Log.h"
#include "Foundation/PDB_Assert.h"
#include "Foundation/PDB_Move.h"
#include "Foundation/PDB_Forward.h"
#include "Foundation/PDB_Memory.h"
#include "Foundation/PDB_ArrayView.h"
#include "Foundation/PDB_BitUtil.h"
#include "Foundation/PDB_BitOperators.h"
#include "Foundation/PDB_PointerUtil.h"
