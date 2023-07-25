#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraInstruction {
public:
    // CameraInstruction inner types declare
    // clang-format off
    struct FadeInstruction;
    struct SetInstruction;
    // clang-format on

    // CameraInstruction inner types define
    struct FadeInstruction {
    public:
        // FadeInstruction inner types declare
        // clang-format off
        struct ColorOption;
        struct TimeOption;
        // clang-format on

        // FadeInstruction inner types define
        struct ColorOption {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_FADEINSTRUCTION_COLOROPTION
        public:
            ColorOption& operator=(ColorOption const&) = delete;
            ColorOption(ColorOption const&)            = delete;
            ColorOption()                              = delete;
#endif

        public:
            /**
             * @symbol ?bindType\@ColorOption\@FadeInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

        struct TimeOption {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_FADEINSTRUCTION_TIMEOPTION
        public:
            TimeOption& operator=(TimeOption const&) = delete;
            TimeOption(TimeOption const&)            = delete;
            TimeOption()                             = delete;
#endif

        public:
            /**
             * @symbol ?bindType\@TimeOption\@FadeInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_FADEINSTRUCTION
    public:
        FadeInstruction& operator=(FadeInstruction const&) = delete;
        FadeInstruction(FadeInstruction const&)            = delete;
        FadeInstruction()                                  = delete;
#endif

    public:
        /**
         * @symbol ??8FadeInstruction\@CameraInstruction\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const&) const;
        /**
         * @symbol ?bindType\@FadeInstruction\@CameraInstruction\@\@SAXXZ
         */
        MCAPI static void bindType();
    };

    struct SetInstruction {
    public:
        // SetInstruction inner types declare
        // clang-format off
        struct EaseOption;
        struct RotOption;
        // clang-format on

        // SetInstruction inner types define
        struct EaseOption {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_SETINSTRUCTION_EASEOPTION
        public:
            EaseOption& operator=(EaseOption const&) = delete;
            EaseOption(EaseOption const&)            = delete;
            EaseOption()                             = delete;
#endif

        public:
            /**
             * @symbol ?bindType\@EaseOption\@SetInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

        struct RotOption {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_SETINSTRUCTION_ROTOPTION
        public:
            RotOption& operator=(RotOption const&) = delete;
            RotOption(RotOption const&)            = delete;
            RotOption()                            = delete;
#endif

        public:
            /**
             * @symbol ?bindType\@RotOption\@SetInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION_SETINSTRUCTION
    public:
        SetInstruction(SetInstruction const&) = delete;
        SetInstruction()                      = delete;
#endif

    public:
        /**
         * @symbol ??4SetInstruction\@CameraInstruction\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction const&);
        /**
         * @symbol ??4SetInstruction\@CameraInstruction\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct CameraInstruction::SetInstruction& operator=(struct CameraInstruction::SetInstruction&&);
        /**
         * @symbol ??8SetInstruction\@CameraInstruction\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct CameraInstruction::SetInstruction const&) const;
        /**
         * @symbol ?bindType\@SetInstruction\@CameraInstruction\@\@SAXXZ
         */
        MCAPI static void bindType();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAINSTRUCTION
public:
    CameraInstruction& operator=(CameraInstruction const&) = delete;
    CameraInstruction(CameraInstruction const&)            = delete;
    CameraInstruction()                                    = delete;
#endif

public:
    /**
     * @symbol ??8CameraInstruction\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct CameraInstruction const&) const;
    /**
     * @symbol ?bindType\@CameraInstruction\@\@SAXXZ
     */
    MCAPI static void bindType();
};
