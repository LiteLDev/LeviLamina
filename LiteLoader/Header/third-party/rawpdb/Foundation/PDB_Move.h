// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#pragma once

#include "PDB_DisableWarningsPush.h"
#include <type_traits>
#include "PDB_DisableWarningsPop.h"


// See Jonathan Müller's blog for replacing std::move and std::forward:
// https://foonathan.net/2021/09/move-forward/
#define PDB_MOVE(...)		static_cast<std::remove_reference_t<decltype(__VA_ARGS__)>&&>(__VA_ARGS__)
