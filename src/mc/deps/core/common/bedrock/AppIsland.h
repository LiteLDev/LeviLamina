#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class AppIsland {

public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&) = delete;
    AppIsland(AppIsland const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@AppIsland\@Bedrock\@\@UEAAGXZ
     */
    virtual unsigned short getId(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_APPISLAND
    /**
     * @symbol ?mainUpdate\@AppIsland\@Bedrock\@\@UEAAXXZ
     */
    MCVAPI void mainUpdate(); // NOLINT
    /**
     * @symbol ?processActivationArguments\@AppIsland\@Bedrock\@\@UEAAXAEBVActivationArguments\@2\@\@Z
     */
    MCVAPI void processActivationArguments(class Bedrock::ActivationArguments const&); // NOLINT
    /**
     * @symbol ?resume\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool resume(); // NOLINT
    /**
     * @symbol ?start\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool start(); // NOLINT
    /**
     * @symbol ?stop\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool stop(); // NOLINT
    /**
     * @symbol ?suspend\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool suspend(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppIsland(); // NOLINT
#endif
    /**
     * @symbol ??0AppIsland\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI AppIsland(); // NOLINT
};

}; // namespace Bedrock
