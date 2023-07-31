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

        public:
            // prevent constructor by default
            ColorOption& operator=(ColorOption const&) = delete;
            ColorOption(ColorOption const&)            = delete;
            ColorOption()                              = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ?bindType\@ColorOption\@FadeInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
            // NOLINTEND
        };

        struct TimeOption {

        public:
            // prevent constructor by default
            TimeOption& operator=(TimeOption const&) = delete;
            TimeOption(TimeOption const&)            = delete;
            TimeOption()                             = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ?bindType\@TimeOption\@FadeInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
            // NOLINTEND
        };

    public:
        // prevent constructor by default
        FadeInstruction& operator=(FadeInstruction const&) = delete;
        FadeInstruction(FadeInstruction const&)            = delete;
        FadeInstruction()                                  = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??8FadeInstruction\@CameraInstruction\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const&) const;
        /**
         * @symbol ?bindType\@FadeInstruction\@CameraInstruction\@\@SAXXZ
         */
        MCAPI static void bindType();
        // NOLINTEND
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

        public:
            // prevent constructor by default
            EaseOption& operator=(EaseOption const&) = delete;
            EaseOption(EaseOption const&)            = delete;
            EaseOption()                             = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ?bindType\@EaseOption\@SetInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
            // NOLINTEND
        };

        struct RotOption {

        public:
            // prevent constructor by default
            RotOption& operator=(RotOption const&) = delete;
            RotOption(RotOption const&)            = delete;
            RotOption()                            = delete;

        public:
            // NOLINTBEGIN
            /**
             * @symbol ?bindType\@RotOption\@SetInstruction\@CameraInstruction\@\@SAXXZ
             */
            MCAPI static void bindType();
            // NOLINTEND
        };

    public:
        // prevent constructor by default
        SetInstruction(SetInstruction const&) = delete;
        SetInstruction()                      = delete;

    public:
        // NOLINTBEGIN
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
        // NOLINTEND
    };

public:
    // prevent constructor by default
    CameraInstruction& operator=(CameraInstruction const&) = delete;
    CameraInstruction(CameraInstruction const&)            = delete;
    CameraInstruction()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??8CameraInstruction\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct CameraInstruction const&) const;
    /**
     * @symbol ?bindType\@CameraInstruction\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND
};
