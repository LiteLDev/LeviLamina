#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DimensionDocument {
public:
    // DimensionDocument inner types declare
    // clang-format off
    struct Dimension;
    // clang-format on

    // DimensionDocument inner types define
    struct Dimension {
    public:
        // Dimension inner types declare
        // clang-format off
        struct Components;
        struct Description;
        // clang-format on

        // Dimension inner types define
        struct Description {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk98e581;
            // NOLINTEND

        public:
            // prevent constructor by default
            Description(Description const&);
            Description();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ::DimensionDocument::Dimension::Description&
            operator=(::DimensionDocument::Dimension::Description const&);

            MCAPI ::DimensionDocument::Dimension::Description& operator=(::DimensionDocument::Dimension::Description&&);

            MCAPI ~Description();
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

        struct Components {
        public:
            // Components inner types declare
            // clang-format off
            struct Bounds;
            struct Generation;
            // clang-format on

            // Components inner types define
            struct Bounds {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<4, 4> mUnk847cac;
                ::ll::UntypedStorage<4, 4> mUnkfc5cfe;
                // NOLINTEND

            public:
                // prevent constructor by default
                Bounds& operator=(Bounds const&);
                Bounds(Bounds const&);
                Bounds();

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

            struct Generation {
            public:
                // member variables
                // NOLINTBEGIN
                ::ll::UntypedStorage<8, 32> mUnk451da2;
                // NOLINTEND

            public:
                // prevent constructor by default
                Generation(Generation const&);
                Generation();

            public:
                // member functions
                // NOLINTBEGIN
                MCAPI ::DimensionDocument::Dimension::Components::Generation&
                operator=(::DimensionDocument::Dimension::Components::Generation const&);

                MCAPI ::DimensionDocument::Dimension::Components::Generation&
                operator=(::DimensionDocument::Dimension::Components::Generation&&);
                // NOLINTEND

            public:
                // static functions
                // NOLINTBEGIN
                MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
                // NOLINTEND
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8>  mUnkedad24;
            ::ll::UntypedStorage<8, 32> mUnk5c955b;
            // NOLINTEND

        public:
            // prevent constructor by default
            Components(Components const&);
            Components();

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ::DimensionDocument::Dimension::Components&
            operator=(::DimensionDocument::Dimension::Components const&);

            MCAPI ::DimensionDocument::Dimension::Components& operator=(::DimensionDocument::Dimension::Components&&);
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk4e2b38;
        ::ll::UntypedStorage<8, 40> mUnkcf7db7;
        // NOLINTEND

    public:
        // prevent constructor by default
        Dimension(Dimension const&);
        Dimension();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::DimensionDocument::Dimension& operator=(::DimensionDocument::Dimension&&);

        MCAPI ::DimensionDocument::Dimension& operator=(::DimensionDocument::Dimension const&);

        MCAPI ~Dimension();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf44490;
    ::ll::UntypedStorage<8, 72> mUnk60b8d6;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDocument& operator=(DimensionDocument const&);
    DimensionDocument(DimensionDocument const&);
    DimensionDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DimensionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
