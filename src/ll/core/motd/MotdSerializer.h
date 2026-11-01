#pragma once
#include "ll/api/reflection/Deserialization.h"
#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/reflection/Serialization.h"
#include "ll/api/service/ServerInfo.h"
#include <algorithm>
#include <cmath>

namespace ll {

namespace reflection {
namespace detail {

template <typename T, auto... Members>
struct DefaultMemberSerializer {
    using Type = T;

    template <typename J, typename F>
    static Expected<> serializeMembers(Type const&, Type const&, J&, F const&) {
        return {};
    }

    template <typename J, typename F, auto Member, auto... Rest>
    static Expected<> serializeMembers(Type const& value, Type const& defaults, J& j, F const& keyFormatter) {
        if (value.*Member != defaults.*Member) {
            if (auto result = member<Member>(value, j, keyFormatter); !result) {
                return forwardError(result.error());
            }
        }
        return serializeMembers<J, F, Rest...>(value, defaults, j, keyFormatter);
    }

    template <typename J, typename F>
    static Expected<J> serialize(Type const& value, F const& keyFormatter) {
        static Type const defaultValue{};
        J                 result = J::object();
        if (auto status = serializeMembers<J, F, Members...>(value, defaultValue, result, keyFormatter); !status) {
            return forwardError(status.error());
        }
        return result;
    }

    template <typename J, typename F>
    static Expected<> deserializeMembers(Type&, J const&, F const&) {
        return {};
    }

    template <typename J, typename F, auto Member, auto... Rest>
    static Expected<> deserializeMembers(Type& value, J const& j, F const& keyFormatter) {
        if (auto result = default_member<Member>(value, j, keyFormatter); !result) {
            return forwardError(result.error());
        }
        return deserializeMembers<J, F, Rest...>(value, j, keyFormatter);
    }

    template <typename J, typename F>
    static Expected<Type> deserialize(J const& j, F const& keyFormatter) {
        if (!j.is_object()) return makeDeserObjectTypeError();

        Type value{};
        if (auto status = deserializeMembers<J, F, Members...>(value, j, keyFormatter); !status) {
            return forwardError(status.error());
        }
        return value;
    }
};

} // namespace detail

template <>
struct Serializer<motd::Gradient::Stop>
: detail::DefaultMemberSerializer<motd::Gradient::Stop, &motd::Gradient::Stop::pos, &motd::Gradient::Stop::color> {};

template <>
struct Serializer<motd::Gradient> : detail::DefaultMemberSerializer<
                                        motd::Gradient,
                                        &motd::Gradient::space,
                                        &motd::Gradient::axis,
                                        &motd::Gradient::wrap,
                                        &motd::Gradient::scope,
                                        &motd::Gradient::update,
                                        &motd::Gradient::periodMs,
                                        &motd::Gradient::phase,
                                        &motd::Gradient::stops> {};

template <>
struct Serializer<motd::Rainbow> : detail::DefaultMemberSerializer<
                                       motd::Rainbow,
                                       &motd::Rainbow::hue,
                                       &motd::Rainbow::span,
                                       &motd::Rainbow::saturation,
                                       &motd::Rainbow::lightness,
                                       &motd::Rainbow::update,
                                       &motd::Rainbow::periodMs,
                                       &motd::Rainbow::phase> {};

template <>
struct Serializer<motd::Span> : detail::DefaultMemberSerializer<
                                    motd::Span,
                                    &motd::Span::text,
                                    &motd::Span::style,
                                    &motd::Span::paint,
                                    &motd::Span::tooltip> {};

template <>
struct Serializer<motd::Image> : detail::DefaultMemberSerializer<
                                     motd::Image,
                                     &motd::Image::data,
                                     &motd::Image::width,
                                     &motd::Image::height,
                                     &motd::Image::fit,
                                     &motd::Image::smooth,
                                     &motd::Image::opacity,
                                     &motd::Image::tooltip> {};

template <>
struct Serializer<motd::HeroLayer> : detail::DefaultMemberSerializer<
                                         motd::HeroLayer,
                                         &motd::HeroLayer::image,
                                         &motd::HeroLayer::x,
                                         &motd::HeroLayer::y,
                                         &motd::HeroLayer::width,
                                         &motd::HeroLayer::height,
                                         &motd::HeroLayer::opacity,
                                         &motd::HeroLayer::parallax> {};

template <>
struct Serializer<motd::Hero> : detail::DefaultMemberSerializer<
                                    motd::Hero,
                                    &motd::Hero::images,
                                    &motd::Hero::layers,
                                    &motd::Hero::transition,
                                    &motd::Hero::intervalMs,
                                    &motd::Hero::transitionMs,
                                    &motd::Hero::aspectRatio,
                                    &motd::Hero::overlay> {};

template <>
struct Serializer<motd::Carousel> : detail::DefaultMemberSerializer<
                                        motd::Carousel,
                                        &motd::Carousel::images,
                                        &motd::Carousel::transition,
                                        &motd::Carousel::intervalMs,
                                        &motd::Carousel::transitionMs,
                                        &motd::Carousel::aspectRatio> {};

template <>
struct Serializer<motd::Insets> : detail::DefaultMemberSerializer<
                                      motd::Insets,
                                      &motd::Insets::left,
                                      &motd::Insets::top,
                                      &motd::Insets::right,
                                      &motd::Insets::bottom> {};

template <>
struct Serializer<motd::Node> : detail::DefaultMemberSerializer<
                                    motd::Node,
                                    &motd::Node::dir,
                                    &motd::Node::main,
                                    &motd::Node::cross,
                                    &motd::Node::padding,
                                    &motd::Node::gap,
                                    &motd::Node::scale,
                                    &motd::Node::background,
                                    &motd::Node::wrap,
                                    &motd::Node::content,
                                    &motd::Node::children> {};

template <>
struct Serializer<motd::MotdPayload> : detail::DefaultMemberSerializer<
                                           motd::MotdPayload,
                                           &motd::MotdPayload::version,
                                           &motd::MotdPayload::root,
                                           &motd::MotdPayload::icon,
                                           &motd::MotdPayload::hero,
                                           &motd::MotdPayload::readmeBackground,
                                           &motd::MotdPayload::readmeOverlay> {};
} // namespace reflection

namespace motd {
struct MotdKeyFormatter {
    std::string operator()(std::string_view input) const { //
        return std::string{input};
    }

    template <typename Enum>
        requires std::is_enum_v<Enum>
    std::string operator()(Enum value) const {
        return string_utils::toSnakeCaseWithoutM(magic_enum::enum_name(value));
    }
};
} // namespace motd

} // namespace ll