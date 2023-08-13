#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IIslandCore.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
// clang-format on

namespace Bedrock {

class AppIsland : public ::Bedrock::IIslandCore {

public:
    // prevent constructor by default
    AppIsland& operator=(AppIsland const&) = delete;
    AppIsland(AppIsland const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AppIsland\@Bedrock\@\@UEAAGXZ
     */
    virtual unsigned short getId();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_APPISLAND
    /**
     * @symbol ?mainUpdate\@AppIsland\@Bedrock\@\@UEAAXXZ
     */
    MCVAPI void mainUpdate();
    /**
     * @symbol ?processActivationArguments\@AppIsland\@Bedrock\@\@UEAAXAEBVActivationArguments\@2\@\@Z
     */
    MCVAPI void processActivationArguments(class Bedrock::ActivationArguments const&);
    /**
     * @symbol ?resume\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool resume();
    /**
     * @symbol ?start\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool start();
    /**
     * @symbol ?stop\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool stop();
    /**
     * @symbol ?suspend\@AppIsland\@Bedrock\@\@UEAA_NXZ
     */
    MCVAPI bool suspend();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppIsland();
#endif
    /**
     * @symbol ??0AppIsland\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI AppIsland();
    // NOLINTEND
};

}; // namespace Bedrock
