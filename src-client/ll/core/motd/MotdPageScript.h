#pragma once

#include <string_view>

namespace ll::motd::detail {

inline constexpr std::string_view MotdPageScript = R"LLMOTD(
(function () {
    if (window.__levilaminaMotd) return;

    var state = {
        entries: Object.create(null),
        order: [],
        versions: Object.create(null),
        renderTimer: null,
        obfuscationTimer: null,
        slideshowTimer: null,
        paintTimer: null,
        mutationObserver: null,
        renderQueued: false,
        rendering: false,
        verifiedCard: null,
        flowCard: null,
        flowNodes: [],
        rowBindings: [],
        indexAnchors: Object.create(null),
        listScope: null,
        nativeServers: null,
        nativeListValue: null,
        nativeListSignature: '',
        nativeListLength: null,
        nativeBinding: null,
        nativeDetails: null,
        nativeSignature: ''
    };
    // oreui's focus registry assigns this attribute to InteractivePrimitive nodes.
    // Its numeric value and the generated CSS module classes are build-specific.
    var InteractiveSelector = 'button,[role="button"],[data-focusable-id]';
    var PlaySelector = '[data-testid="server-play-button"]';
    var EditSelector = '[data-testid="edit-server-button"]';
    var AddressSelector = '[data-testid="show-address-button"]';
    var DetailsControlSelector = PlaySelector + ',' + EditSelector + ',' + AddressSelector;
    var DetailsFieldSelector = AddressSelector + ',' + EditSelector;
    var ScrollSelector = '[data-testid="scroll-view"]';

    function runSafely(callback) {
        try { return callback(); } catch (error) { return null; }
    }

    function safeRender() {
        if (state.rendering) return;
        state.rendering = true;
        try {
            runSafely(observeNativeDetails);
            if (state.nativeListValue) {
                runSafely(function () { receiveNativeList(state.nativeListValue, true); });
            }
            runSafely(observeDom);
            renderInline();
        } catch (error) {
            // Native models/DOM may be changing. Keep the API and let the next
            // native event or periodic retry render the updated page.
        } finally { state.rendering = false; }
    }

    function element(tag, className) {
        var value = document.createElement(tag);
        if (className) value.className = className;
        return value;
    }

    function addClass(node, name) {
        var className = String(node.className || '');
        if ((' ' + className + ' ').indexOf(' ' + name + ' ') === -1) {
            node.className = className ? className + ' ' + name : name;
        }
    }

    function removeClass(node, name) {
        var tokens = String(node.className || '').split(/\s+/);
        var kept = [];
        for (var i = 0; i < tokens.length; ++i) {
            if (tokens[i] && tokens[i] !== name) kept.push(tokens[i]);
        }
        node.className = kept.join(' ');
    }

    function normalizeColor(color) {
        if (!color) return {r: 255, g: 255, b: 255, a: 255};
        if (Array.isArray(color)) {
            function component(value) {
                var number = Number(value);
                return isFinite(number) ? Math.max(0, Math.min(255, Math.round(number * 255))) : 0;
            }
            return {r: component(color[0]), g: component(color[1]), b: component(color[2]), a: component(color[3])};
        }
        return color;
    }

    function normalizePaint(paint) {
        if (!paint) return null;
        if (paint.solid || paint.gradient || paint.rainbow) return paint;
        if (Array.isArray(paint)) return {solid: paint};
        if (paint.r !== undefined) return {solid: paint};
        if (paint.stops) return {gradient: paint};
        if (paint.hue !== undefined || paint.saturation !== undefined || paint.lightness !== undefined) {
            return {rainbow: paint};
        }
        return null;
    }

    function normalizeStyle(style) {
        if (!style) return {};
        if (typeof style !== 'string') return style;
        var flags = style.split('|');
        return {
            bold: flags.indexOf('bold') !== -1,
            italic: flags.indexOf('italic') !== -1,
            underline: flags.indexOf('underline') !== -1,
            strike: flags.indexOf('strike') !== -1,
            obfuscated: flags.indexOf('obfuscated') !== -1,
            shadow: flags.indexOf('shadow') !== -1
        };
    }

    function rgba(color) {
        color = normalizeColor(color);
        return 'rgba(' + (color.r | 0) + ',' + (color.g | 0) + ',' + (color.b | 0) + ','
            + (Math.max(0, Math.min(255, color.a | 0)) / 255) + ')';
    }

    function gradientAngle(axis) {
        if (axis === 'vertical') return '180deg';
        if (axis === 'diagonal') return '135deg';
        if (axis === 'horizontal' || axis === 'along_text' || axis === undefined) return '90deg';
        return '';
    }

    function gradientStops(stops) {
        var values = [];
        if (!stops || !stops.length) return values;
        for (var i = 0; i < stops.length; ++i) {
            var stop = stops[i] || {};
            var position = stop.pos === undefined ? i / Math.max(1, stops.length - 1) : stop.pos;
            values.push(rgba(stop.color) + ' ' + (Math.max(0, Math.min(1, position)) * 100) + '%');
        }
        return values;
    }

    function paintBackgroundImage(paint) {
        paint = normalizePaint(paint);
        if (!paint) return 'none';
        if (paint.gradient) {
            var stops = gradientStops(paint.gradient.stops);
            if (!stops.length) return 'none';
            var angle = gradientAngle(paint.gradient.axis);
            if (angle) return 'linear-gradient(' + angle + ',' + stops.join(',') + ')';
            return 'radial-gradient(circle at center,' + stops.join(',') + ')';
        }
        if (paint.rainbow) {
            var rainbow = paint.rainbow;
            var rainbowStops = [];
            for (var i = 0; i <= 12; ++i) {
                var ratio = i / 12;
                rainbowStops.push(
                    rgba(hslToRgb(
                        (rainbow.hue || 0) + (rainbow.span === undefined ? 360 : rainbow.span) * ratio,
                        rainbow.saturation === undefined ? 1 : rainbow.saturation,
                        rainbow.lightness === undefined ? .5 : rainbow.lightness
                    )) + ' ' + Math.round(ratio * 100) + '%'
                );
            }
            return 'linear-gradient(90deg,' + rainbowStops.join(',') + ')';
        }
        return 'none';
    }

    function applyBackgroundPaint(node, paint) {
        node.style.backgroundColor = '';
        node.style.backgroundImage = 'none';
        paint = normalizePaint(paint);
        if (!paint) return;
        if (paint.solid) {
            node.style.backgroundColor = rgba(paint.solid);
            return;
        }
        node.style.backgroundImage = paintBackgroundImage(paint);
    }

    function hslToRgb(hue, saturation, lightness) {
        var h = ((hue % 360) + 360) % 360 / 360;
        var s = Math.max(0, Math.min(1, saturation));
        var l = Math.max(0, Math.min(1, lightness));
        if (s === 0) {
            var gray = Math.round(l * 255);
            return {r: gray, g: gray, b: gray, a: 255};
        }
        var q = l < .5 ? l * (1 + s) : l + s - l * s;
        var p = 2 * l - q;
        function channel(value) {
            if (value < 0) value += 1;
            if (value > 1) value -= 1;
            if (value < 1 / 6) return p + (q - p) * 6 * value;
            if (value < 1 / 2) return q;
            if (value < 2 / 3) return p + (q - p) * (2 / 3 - value) * 6;
            return p;
        }
        return {
            r: Math.round(channel(h + 1 / 3) * 255),
            g: Math.round(channel(h) * 255),
            b: Math.round(channel(h - 1 / 3) * 255),
            a: 255
        };
    }

    function colorAtStops(stops, position) {
        if (!stops || !stops.length) return {r: 255, g: 255, b: 255, a: 255};
        position = Math.max(0, Math.min(1, position));
        var left = stops[0];
        var right = stops[stops.length - 1];
        for (var i = 0; i < stops.length; ++i) {
            if ((stops[i].pos || 0) <= position) left = stops[i];
            if ((stops[i].pos || 0) >= position) {
                right = stops[i];
                break;
            }
        }
        var leftPos = left.pos || 0;
        var rightPos = right.pos || 1;
        var mix = rightPos > leftPos ? (position - leftPos) / (rightPos - leftPos) : 0;
        var a = normalizeColor(left.color || {});
        var b = normalizeColor(right.color || {});
        var aAlpha = a.a === undefined ? 255 : a.a;
        var bAlpha = b.a === undefined ? 255 : b.a;
        return {
            r: Math.round((a.r || 0) + ((b.r || 0) - (a.r || 0)) * mix),
            g: Math.round((a.g || 0) + ((b.g || 0) - (a.g || 0)) * mix),
            b: Math.round((a.b || 0) + ((b.b || 0) - (a.b || 0)) * mix),
            a: Math.round(aAlpha + (bAlpha - aAlpha) * mix)
        };
    }

    function applyColorRun(node, colorAt) {
        var text = node.textContent || '';
        if (!text.length) return;
        var reuse = node.children.length === text.length;
        if (!reuse) node.textContent = '';
        var denominator = Math.max(1, text.length - 1);
        for (var i = 0; i < text.length; ++i) {
            var part = reuse ? node.children[i] : element('span');
            part.textContent = text.charAt(i);
            part.style.color = rgba(colorAt(i / denominator));
            if (!reuse) node.appendChild(part);
        }
    }

    function wrappedPosition(value, wrap) {
        if (wrap === 'repeat') return value - Math.floor(value);
        if (wrap === 'mirror') {
            var doubled = ((value % 2) + 2) % 2;
            return doubled > 1 ? 2 - doubled : doubled;
        }
        return Math.max(0, Math.min(1, value));
    }

    function paintColorAt(paint, position, elapsed, gradient, rainbow) {
        if (gradient) {
            var period = Math.max(1, gradient.periodMs || 4000);
            var phase  = gradient.update === 'every'
                           ? Math.floor(elapsed / period) + (gradient.phase || 0)
                           : elapsed / period + (gradient.phase || 0);
            position += phase;
            return colorAtStops(gradient.stops || [], wrappedPosition(position, gradient.wrap));
        }
        if (rainbow) {
            var rainbowPeriod = Math.max(1, rainbow.periodMs || 4000);
            var rainbowPhase  = rainbow.update === 'every'
                                  ? Math.floor(elapsed / rainbowPeriod) + (rainbow.phase || 0)
                                  : elapsed / rainbowPeriod + (rainbow.phase || 0);
            return hslToRgb(
                (rainbow.hue || 0) + (rainbow.span === undefined ? 360 : rainbow.span) * position
                    + rainbowPhase * 360,
                rainbow.saturation === undefined ? 1 : rainbow.saturation,
                rainbow.lightness === undefined ? .5 : rainbow.lightness
            );
        }
        return {r: 255, g: 255, b: 255, a: 255};
    }

    function applyAnimatedPaint(node, elapsed) {
        var paint = node.llMotdPaint;
        if (!paint) return;
        var gradient = paint.gradient;
        var rainbow  = paint.rainbow;
        applyColorRun(node, function (position) {
            return paintColorAt(paint, position, elapsed, gradient, rainbow);
        });
    }

    function updateAnimatedPaints() {
        var nodes = document.getElementsByClassName('ll-motd-animated-paint');
        var now   = Date.now();
        for (var i = 0; i < nodes.length; ++i) {
            applyAnimatedPaint(nodes[i], Math.max(0, now - (nodes[i].llMotdPaintStartedAt || now)));
        }
    }

    function obfuscateText(text) {
        var alphabet = 'ABCDEFGHJKLMNPQRSTUVWXYZ0123456789#$%&*';
        var value = '';
        for (var i = 0; i < text.length; ++i) {
            var character = text.charAt(i);
            value += /\s/.test(character)
                ? character
                : alphabet.charAt(Math.floor(Math.random() * alphabet.length));
        }
        return value;
    }

    function updateObfuscatedText() {
        var nodes = document.getElementsByClassName('ll-motd-obfuscated');
        for (var i = 0; i < nodes.length; ++i) {
            var source = nodes[i].getAttribute('data-ll-motd-text') || '';
            if (nodes[i].children.length) {
                for (var j = 0; j < nodes[i].children.length && j < source.length; ++j) {
                    var character = source.charAt(j);
                    nodes[i].children[j].textContent = /\s/.test(character)
                        ? character
                        : obfuscateText(character);
                }
            } else {
                nodes[i].textContent = obfuscateText(source);
            }
        }
    }

    function plainText(spans) {
        var value = '';
        if (!spans) return value;
        for (var i = 0; i < spans.length; ++i) {
            value += spans[i] && spans[i].text ? spans[i].text : '';
        }
        return value;
    }

    function flexAlignment(value) {
        if (value === 'start') return 'flex-start';
        if (value === 'end') return 'flex-end';
        if (value === 'space_between') return 'space-between';
        return 'center';
    }

    function compactText(node) {
        return (node.textContent || '').replace(/\s+/g, ' ').replace(/^\s+|\s+$/g, '');
    }

    function imageSource(image) {
        if (!image) return '';
        if (image.dataUri && /^data:image\//i.test(image.dataUri)) return image.dataUri;
        if (image.data && /^(?:https?:|data:image\/)/i.test(image.data)) return image.data;
        if (image.data && /^data:/i.test(image.data)) return '';
        if (image.data) return 'data:image/png;base64,' + image.data;
        if (image.pngBase64) return 'data:image/png;base64,' + image.pngBase64;
        if (image.url && /^(?:https?:|data:image\/)/i.test(image.url)) return image.url;
        return '';
    }

    function imageOpacity(image) {
        if (!image || image.opacity === undefined || image.opacity === null) return 1;
        var value = Number(image.opacity);
        return isFinite(value) ? Math.max(0, Math.min(1, value)) : 1;
    }

    function imageFit(image) {
        var fit = image && image.fit;
        return fit === 'cover' ? 'cover' : fit === 'stretch' ? 'fill' : 'contain';
    }

    function aspectRatio(value, fallback) {
        var ratio = Number(value);
        return isFinite(ratio) && ratio > 0 ? ratio : fallback;
    }

    function setAspectRatio(node, ratio) {
        node.llMotdAspectRatio = aspectRatio(ratio, 1);
        node.style.height = '0';
        node.style.paddingTop = (100 / node.llMotdAspectRatio) + '%';
    }

    function syncSlideshowSizes() {
        var containers = document.getElementsByClassName('ll-motd-slideshow');
        for (var i = 0; i < containers.length; ++i) {
            var container = containers[i];
            var width = container.getBoundingClientRect().width;
            var ratio = aspectRatio(container.llMotdAspectRatio, 1);
            if (width <= 0) continue;
            var height = width / ratio;
            if (Math.abs((Number(container.llMotdHeight) || 0) - height) < .5) continue;
            container.llMotdHeight = height;
            container.style.paddingTop = '0';
            container.style.height = height + 'px';
        }
    }

    function slideLayer(image) {
        var layer = element('div', 'll-motd-slide');
        layer.style.left = '0';
        layer.style.top = '0';
        layer.style.right = '0';
        layer.style.bottom = '0';
        layer.style.opacity = '0';
        var source = imageSource(image);
        if (!source) return layer;
        var picture = element('img', 'll-motd-slide-image');
        picture.src = source;
        picture.alt = '';
        picture.style.position = 'absolute';
        picture.style.left = '0';
        picture.style.top = '0';
        picture.style.right = '0';
        picture.style.bottom = '0';
        picture.style.display = 'block';
        picture.style.width = '100%';
        picture.style.height = '100%';
        picture.style.objectFit = imageFit(image);
        picture.style.opacity = String(imageOpacity(image));
        layer.appendChild(picture);
        return layer;
    }

    function activateSlide(container, nextIndex, immediate) {
        var layers = container.llMotdSlideLayers || [];
        if (!layers.length) return;
        var current = container.llMotdSlideIndex || 0;
        for (var i = 0; i < layers.length; ++i) {
            var active = i === nextIndex;
            layers[i].style.transitionDuration = immediate ? '0ms' : (container.llMotdTransitionMs || 0) + 'ms';
            if (active) {
                removeClass(layers[i], 'previous');
                addClass(layers[i], 'active');
                layers[i].style.opacity = '1';
            } else {
                removeClass(layers[i], 'active');
                layers[i].style.opacity = '0';
                if (container.llMotdTransition === 'Slide' && i === current) addClass(layers[i], 'previous');
                else removeClass(layers[i], 'previous');
            }
        }
        container.llMotdSlideIndex = nextIndex;
        container.llMotdNextAt = Date.now() + (container.llMotdIntervalMs || 4000);
    }

    function registerSlideshow(container, config, defaultIntervalMs, defaultTransitionMs) {
        var images = config.images || [];
        var transition =
            config.transition === 'slide' ? 'Slide' : config.transition === 'ken_burns' ? 'KenBurns' : 'Fade';
        var transitionMs =
            config.transitionMs === undefined ? defaultTransitionMs : Math.max(0, Number(config.transitionMs) || 0);
        var intervalMs = Math.max(transitionMs + 100, Number(config.intervalMs) || defaultIntervalMs);
        setAspectRatio(container, config.aspectRatio);
        container.className = 'll-motd-slideshow ll-motd-carousel-stage';
        container.setAttribute('data-transition', transition);
        container.llMotdTransition = transition;
        container.llMotdTransitionMs = transitionMs;
        container.llMotdIntervalMs = intervalMs;
        container.llMotdSlideLayers = [];
        for (var i = 0; i < images.length; ++i) {
            var layer = slideLayer(images[i]);
            container.appendChild(layer);
            container.llMotdSlideLayers.push(layer);
        }
        activateSlide(container, 0, true);
    }

    function advanceSlideshows() {
        syncSlideshowSizes();
        var now = Date.now();
        var containers = document.getElementsByClassName('ll-motd-slideshow');
        for (var i = 0; i < containers.length; ++i) {
            var container = containers[i];
            var layers = container.llMotdSlideLayers || [];
            if (layers.length < 2 || now < (container.llMotdNextAt || 0)) continue;
            activateSlide(container, ((container.llMotdSlideIndex || 0) + 1) % layers.length, false);
        }
        var heroLayers = document.getElementsByClassName('ll-motd-hero-layer');
        for (var j = 0; j < heroLayers.length; ++j) {
            var parallax = Number(heroLayers[j].llMotdParallax) || 0;
            if (parallax === 0) continue;
            heroLayers[j].style.transform = 'translateX('
                + (Math.sin(now / 2600 + j * 1.7) * parallax * 3).toFixed(3) + '%)';
        }
    }

    function addressParts(address) {
        var invalid = {host: '', port: ''};
        if (typeof address !== 'string') return invalid;
        var value = address.replace(/^\s+|\s+$/g, '').replace(/^[a-z][a-z0-9+.-]*:\/\//i, '');
        value = value.split(/[/?#]/)[0];
        if (!value || /\s|@/.test(value)) return invalid;
        var host = value;
        var port = '';
        if (value.charAt(0) === '[') {
            var bracket = value.indexOf(']');
            if (bracket < 2) return invalid;
            host = value.slice(1, bracket);
            var rest = value.slice(bracket + 1);
            if (rest && !/^:\d+$/.test(rest)) return invalid;
            port = rest ? rest.slice(1) : '';
        } else {
            var colons = value.match(/:/g);
            if (colons && colons.length === 1) {
                var colon = value.indexOf(':');
                host = value.slice(0, colon);
                port = value.slice(colon + 1);
                if (!port) return invalid;
            }
        }
        if (!host || /[\s\[\]@/?#]/.test(host)) return invalid;
        if (host.indexOf(':') !== -1) {
            if (!/^[0-9a-f:.]+(?:%[a-z0-9_.-]+)?$/i.test(host)) return invalid;
            var ipv6 = host.split('%')[0];
            var compressed = ipv6.indexOf('::');
            if (ipv6.indexOf(':::') !== -1 || (compressed !== -1 && ipv6.indexOf('::', compressed + 2) !== -1)) return invalid;
            var groups = ipv6.split(':');
            var count = 0;
            for (var g = 0; g < groups.length; ++g) {
                if (!groups[g]) continue;
                if (groups[g].indexOf('.') !== -1 && g === groups.length - 1) {
                    var ipv4 = groups[g].split('.');
                    if (ipv4.length !== 4) return invalid;
                    for (var ip = 0; ip < ipv4.length; ++ip) {
                        if (!/^\d{1,3}$/.test(ipv4[ip]) || Number(ipv4[ip]) > 255) return invalid;
                    }
                    count += 2;
                } else {
                    if (!/^[0-9a-f]{1,4}$/i.test(groups[g])) return invalid;
                    ++count;
                }
            }
            if (compressed === -1 ? count !== 8 : count >= 8) return invalid;
        }
        if (port && (!/^\d+$/.test(port) || Number(port) < 1 || Number(port) > 65535)) return invalid;
        return {host: host.toLowerCase(), port: port ? String(Number(port)) : ''};
    }

    function addressHostKey(host) {
        return host.indexOf(':') !== -1 ? '[' + host + ']' : host;
    }

    function serverAddressKey(address) {
        var parts = addressParts(address);
        if (!parts.host) return '';
        return addressHostKey(parts.host) + (parts.port ? ':' + parts.port : '');
    }

    function addressFromFields(values) {
        if (values.length < 3) return '';
        var parts = addressParts(values[values.length - 2]);
        var port = values[values.length - 1];
        if (!parts.host || !/^\d+$/.test(port) || Number(port) < 1 || Number(port) > 65535) return '';
        port = String(Number(port));
        if (parts.port && parts.port !== port) return '';
        return addressHostKey(parts.host) + ':' + port;
    }

    function registeredAddress(address) {
        if (!address) return '';
        if (state.entries[address]) return address;
        var host = addressHostKey(addressParts(address).host);
        if (state.entries[host]) {
            // A caller that sends a host without a port explicitly groups that
            // host's ports together. A fully qualified address takes priority.
            return host;
        }
        return '';
    }

    function ensureStyle() {
        if (document.getElementById('ll-motd-style')) return;
        var style = element('style');
        style.id = 'll-motd-style';
        style.textContent = [
            '.ll-motd-flow-natural{flex:0 0 auto!important;height:auto!important;min-width:0;max-width:100%;',
            'margin-left:0!important;margin-right:0!important;padding-left:0!important;padding-right:0!important;',
            'box-sizing:border-box}',
            '.ll-motd-flow-natural .ll-motd-flow-natural{width:100%!important}',
            // vne uses a floating Hm scrollbar outside the desktop layout.
            // Reserve its 1.2rem thumb plus an inner gap independently of any
            // browser scrollbar width; Cohtml does not reserve that width.
            '.ll-motd-flow-viewport{margin-left:0!important;margin-right:0!important;',
            'padding-right:2.4rem!important;min-width:0;box-sizing:border-box}',
            '.ll-motd-flow-scroll{overflow-x:visible!important;overflow-y:visible!important}',
            '.ll-motd-flow-natural [data-testid="mouse-scrollbar"]{display:none!important}',
            '#ll-motd-readme{display:flex;flex:0 0 auto;flex-direction:column;width:100%;margin:1.6rem 0 0;',
            'padding:0;box-sizing:border-box;background-color:transparent;color:#fff;overflow:hidden;',
            'font-family:"Minecraft Seven v2",var(--localeSpecificNotoSansFonts),sans-serif;',
            'font-size:1.6rem;line-height:2rem;letter-spacing:.04rem;',
            'border-width:0}',
            '.ll-motd-readme-body{display:flex;flex:0 0 auto;flex-direction:column;width:100%;box-sizing:border-box;',
            'position:relative;overflow:hidden;min-width:0;padding:2rem 2.4rem;',
            'background-color:#202326;',
            'background-image:radial-gradient(circle at 100% 0,rgba(89,151,235,.14),transparent 46%),',
            'linear-gradient(180deg,rgba(52,56,60,.98) 0%,rgba(34,37,40,.98) 58%,rgba(28,30,33,.99) 100%);',
            'border-width:var(--base2Scale,1px);border-style:solid;border-color:rgba(255,255,255,.08);',
            'box-shadow:inset 0 1px 0 rgba(255,255,255,.09),0 .8rem 2.4rem rgba(0,0,0,.24)}',
            '.ll-motd-readme-content{position:relative;z-index:1;width:100%}',
            '.ll-motd-readme-background{position:absolute;left:0;top:0;right:0;bottom:0;z-index:0;',
            'overflow:hidden;pointer-events:none}',
            '.ll-motd-readme-background-image{position:absolute;left:0;top:0;right:0;bottom:0;',
            'display:block;width:100%;height:100%;object-position:center}',
            '.ll-motd-readme-background-overlay{position:absolute;left:0;top:0;right:0;bottom:0;',
            'background-image:linear-gradient(180deg,rgba(18,20,23,.42) 0%,rgba(18,20,23,.72) 62%,',
            'rgba(18,20,23,.86) 100%)}',
            '.ll-motd-readme-spacer{flex:0 0 4rem;width:100%;height:4rem;background-color:transparent}',
            '.ll-motd-top-hero{display:flex;flex:0 0 auto;flex-direction:column;width:100%}',
            '.ll-motd-slideshow{position:relative;display:block;flex:0 0 auto;width:100%;height:0;',
            'overflow:hidden;background-color:#1e1e1f}',
            '.ll-motd-slide{position:absolute;left:0;top:0;right:0;bottom:0;opacity:0;',
            'transition-property:opacity,transform;',
            'transition-timing-function:ease-in-out;will-change:opacity,transform}',
            '.ll-motd-slide-image{position:absolute;left:0;top:0;right:0;bottom:0;',
            'display:block;width:100%;height:100%;object-position:center;',
            'image-rendering:pixelated;pointer-events:none}',
            '.ll-motd-slide.active{opacity:1;transform:translateX(0)}',
            '.ll-motd-slideshow[data-transition="Slide"] .ll-motd-slide{transform:translateX(100%)}',
            '.ll-motd-slideshow[data-transition="Slide"] .ll-motd-slide.active{transform:translateX(0)}',
            '.ll-motd-slideshow[data-transition="Slide"] .ll-motd-slide.previous{transform:translateX(-100%)}',
            '.ll-motd-slideshow[data-transition="KenBurns"] .ll-motd-slide.active{',
            'animation:ll-motd-kenburns 12s ease-in-out both}',
            '.ll-motd-hero-overlay{position:absolute;left:0;top:0;right:0;bottom:0;z-index:2;pointer-events:none}',
            '.ll-motd-hero-layer{position:absolute;z-index:3;pointer-events:none}',
            '.ll-motd-hero-layer-image{position:absolute;left:0;top:0;width:100%;height:100%;',
            'object-position:center;image-rendering:pixelated;pointer-events:none}',
            '.ll-motd-carousel{display:flex;flex:0 0 auto;flex-direction:column;width:100%;min-width:0}',
            '.ll-motd-list-icon-cell{display:flex;align-items:center;justify-content:center;',
            'align-self:center;flex:0 0 4.8rem;width:4.8rem;height:4.8rem;margin-right:.8rem;',
            'box-sizing:border-box;background-color:#1e1e1f;overflow:hidden;',
            'border-width:var(--base2Scale,1px);border-style:solid;border-color:rgba(255,255,255,.16)}',
            '.ll-motd-list-icon{display:block;width:100%;height:100%;object-fit:cover;',
            'image-rendering:pixelated}',
            '.ll-motd-tooltip{position:fixed;z-index:2147483000;max-width:38rem;box-sizing:border-box;',
            'padding:1rem 1.2rem;background-color:rgba(18,18,18,.96);color:#fff;pointer-events:none;',
            'border-width:var(--base2Scale,1px);border-style:solid;border-color:rgba(255,255,255,.16);',
            'box-shadow:0 .4rem 1.2rem rgba(0,0,0,.45);font-size:1.4rem;line-height:2rem}',
            '@keyframes ll-motd-shift{0%{background-position:0% 50%}100%{background-position:200% 50%}}',
            '@keyframes ll-motd-kenburns{0%{transform:scale(1.02) translate(0,0)}',
            '100%{transform:scale(1.1) translate(1.5%,-1%)}}'
        ].join('');
        document.head.appendChild(style);
    }

    function hideTooltip() {
        var tooltip = document.getElementById('ll-motd-tooltip');
        if (tooltip) tooltip.style.display = 'none';
    }

    function applyTooltip(node, spans) {
        if (!spans || !spans.length) return;
        node.title = plainText(spans);
        var show = function (event) {
            var tooltip = document.getElementById('ll-motd-tooltip');
            if (!tooltip) {
                tooltip    = element('div', 'll-motd-tooltip');
                tooltip.id = 'll-motd-tooltip';
                document.body.appendChild(tooltip);
            }
            tooltip.textContent = '';
            for (var i = 0; i < spans.length; ++i) tooltip.appendChild(createSpan(spans[i]));
            tooltip.style.display = 'block';
            var left = Math.min(event.clientX + 14, window.innerWidth - 300);
            var top  = Math.min(event.clientY + 18, window.innerHeight - 90);
            tooltip.style.left = Math.max(8, left) + 'px';
            tooltip.style.top  = Math.max(8, top) + 'px';
        };
        var move = function (event) {
            var tooltip = document.getElementById('ll-motd-tooltip');
            if (!tooltip || tooltip.style.display === 'none') return;
            tooltip.style.left = Math.max(8, Math.min(event.clientX + 14, window.innerWidth - 300)) + 'px';
            tooltip.style.top  = Math.max(8, Math.min(event.clientY + 18, window.innerHeight - 90)) + 'px';
        };
        var hide = function (event) {
            if (event.relatedTarget && node.contains(event.relatedTarget)) return;
            hideTooltip();
        };
        node.onmouseover = show;
        node.onmousemove = move;
        node.onmouseout  = hide;
        node.addEventListener('mouseover', show);
        node.addEventListener('mousemove', move);
        node.addEventListener('mouseout', hide);
    }

    function applyPaint(node, paint) {
        paint = normalizePaint(paint);
        if (!paint) return;
        if (paint.solid) {
            node.style.color = rgba(paint.solid);
            return;
        }
        var animated;
        if (paint.gradient) {
            animated = paint.gradient;
            var stops = animated.stops || [];
            if (!stops.length) return;
        } else if (paint.rainbow) {
            animated = paint.rainbow;
        } else return;
        node.llMotdPaint = paint;
        if (animated.update && animated.update !== 'static') {
            node.llMotdPaintStartedAt = Date.now();
            addClass(node, 'll-motd-animated-paint');
        }
        applyAnimatedPaint(node, 0);
    }

    function createSpan(span) {
        var node = element('span');
        node.llMotdKind = 'span';
        node.llMotdSignature = JSON.stringify(span || {});
        node.textContent = span.text || '';
        node.style.whiteSpace = 'pre-wrap';
        node.style.wordWrap = 'break-word';
        var style = normalizeStyle(span.style);
        if (style.obfuscated) {
            node.setAttribute('data-ll-motd-text', span.text || '');
            addClass(node, 'll-motd-obfuscated');
            node.textContent = obfuscateText(span.text || '');
        }
        if (style.bold) node.style.fontWeight = '700';
        if (style.italic) node.style.fontStyle = 'italic';
        var decorations = [];
        if (style.underline) decorations.push('underline');
        if (style.strike) decorations.push('line-through');
        if (decorations.length) node.style.textDecoration = decorations.join(' ');
        node.style.textShadow = style.shadow === false ? 'none' : '1px 1px 0 rgba(0,0,0,.65)';
        applyPaint(node, span.paint);
        applyTooltip(node, span.tooltip);
        return node;
    }

    function createImage(image) {
        if (!image) return null;
        var source = imageSource(image);
        if (!source) {
            var fallback = element('fast-span');
            fallback.llMotdKind = 'fallback';
            fallback.textContent = plainText(image.tooltip);
            return fallback;
        }
        var node = element('img');
        node.llMotdKind = 'image';
        node.llMotdSignature = JSON.stringify(image);
        node.src = source;
        node.alt = plainText(image.tooltip);
        node.style.display = 'block';
        node.style.maxWidth = '100%';
        node.style.width = image.width ? image.width + 'em' : 'auto';
        node.style.height = image.height ? image.height + 'em' : 'auto';
        node.style.objectFit = imageFit(image);
        node.style.opacity = String(imageOpacity(image));
        applyTooltip(node, image.tooltip);
        return node;
    }

    function createCarousel(value, signature) {
        var carousel = element('div', 'll-motd-carousel');
        carousel.llMotdKind = 'carousel';
        carousel.llMotdSignature = signature;
        var slides = element('div', 'll-motd-slideshow');
        registerSlideshow(slides, value, 4000, 500);
        carousel.appendChild(slides);
        return carousel;
    }

    function applyNodeLayout(node, value) {
        node.style.display = 'flex';
        node.style.flexDirection = value.dir === 'row' ? 'row' : 'column';
        node.style.alignItems = flexAlignment(value.cross);
        node.style.justifyContent = flexAlignment(value.main);
        node.style.gap = (value.gap || 0) + 'em';
        node.style.minWidth = '0';
        node.style.maxWidth = '100%';
        node.style.paddingTop = '';
        node.style.paddingRight = '';
        node.style.paddingBottom = '';
        node.style.paddingLeft = '';
        node.style.background = '';
        node.style.transform = '';
        node.style.whiteSpace = '';
        node.style.overflow = '';
        node.style.textOverflow = '';
        node.style.flexWrap = '';
        if (value.padding) {
            node.style.paddingTop = (value.padding.top || 0) + 'em';
            node.style.paddingRight = (value.padding.right || 0) + 'em';
            node.style.paddingBottom = (value.padding.bottom || 0) + 'em';
            node.style.paddingLeft = (value.padding.left || 0) + 'em';
        }
        if (value.background) applyBackgroundPaint(node, value.background);
        if (value.scale && value.scale !== 1) node.style.transform = 'scale(' + value.scale + ')';
        if (value.wrap === 'nowrap') node.style.whiteSpace = 'nowrap';
        else if (value.wrap === 'ellipsis') {
            node.style.whiteSpace = 'nowrap';
            node.style.overflow = 'hidden';
            node.style.textOverflow = 'ellipsis';
        } else if (value.wrap === 'clip') {
            node.style.whiteSpace = 'nowrap';
            node.style.overflow = 'hidden';
        } else {
            node.style.flexWrap = value.dir === 'row' ? 'wrap' : 'nowrap';
        }
    }

    function clearNode(node) {
        while (node.firstChild) node.removeChild(node.firstChild);
    }

    function removeExtraChildren(node, count) {
        while (node.children.length > count) node.removeChild(node.children[count]);
    }

    function replaceChildAt(node, index, value) {
        var existing = node.children[index];
        if (existing) node.replaceChild(value, existing);
        else node.appendChild(value);
    }

    function patchSpan(node, span) {
        var signature = JSON.stringify(span || {});
        if (node.llMotdSignature === signature) return;
        var replacement = createSpan(span);
        node.parentElement.replaceChild(replacement, node);
    }

    function patchNode(node, value) {
        value = value || {};
        if (Array.isArray(value.content)) {
            if (value.spans === undefined) value.spans = value.content;
        } else if (value.content && typeof value.content === 'object') {
            if (value.content.images) {
                if (value.carousel === undefined) value.carousel = value.content;
            } else if (value.image === undefined) {
                value.image = value.content;
            }
        }
        applyNodeLayout(node, value);
        var content = '';
        if (value.spans && value.spans.length) content = 'spans';
        else if (value.image) content = 'image';
        else if (value.carousel && value.carousel.images && value.carousel.images.length) content = 'carousel';
        else if (value.children && value.children.length) content = 'children';

        if (node.llMotdContent !== content) {
            clearNode(node);
            node.llMotdContent = content;
        }

        if (content === 'spans') {
            for (var i = 0; i < value.spans.length; ++i) {
                var span = node.children[i];
                if (!span || span.llMotdKind !== 'span') replaceChildAt(node, i, createSpan(value.spans[i]));
                else patchSpan(span, value.spans[i]);
            }
            removeExtraChildren(node, value.spans.length);
        } else if (content === 'image') {
            var imageSignature = JSON.stringify(value.image);
            if (node.llMotdImageSignature !== imageSignature) {
                var imaged = createImage(value.image);
                if (!imaged) imaged = element('fast-span');
                replaceChildAt(node, 0, imaged);
                node.llMotdImageSignature = imageSignature;
            }
            removeExtraChildren(node, 1);
        } else if (content === 'carousel') {
            // An unchanged carousel keeps its live layers and playback state.
            // Compare before allocating a replacement that would be discarded.
            var carouselSignature = JSON.stringify(value.carousel);
            if (node.llMotdCarouselSignature !== carouselSignature) {
                replaceChildAt(node, 0, createCarousel(value.carousel, carouselSignature));
                node.llMotdCarouselSignature = carouselSignature;
            }
            removeExtraChildren(node, 1);
        } else if (content === 'children') {
            for (var j = 0; j < value.children.length; ++j) {
                var child = node.children[j];
                if (!child || child.llMotdKind !== 'node') replaceChildAt(node, j, createNode(value.children[j]));
                else patchNode(child, value.children[j]);
            }
            removeExtraChildren(node, value.children.length);
        }
    }

    function createNode(value) {
        var node = element('div');
        node.llMotdKind = 'node';
        patchNode(node, value);
        return node;
    }

    function normalizedText(value) {
        return String(value || '').replace(/\s+/g, ' ').replace(/^\s+|\s+$/g, '');
    }

    function hasClass(node, name) {
        return (' ' + String(node.className || '') + ' ').indexOf(' ' + name + ' ') !== -1;
    }

    function isInjected(node) {
        while (node && node !== document.body) {
            if (node.id === 'll-motd-readme' || node.id === 'll-motd-top-hero'
                || hasClass(node, 'll-motd-list-icon-cell')) return true;
            node = node.parentElement || node.parentNode;
        }
        return false;
    }

    function isInDialog(node) {
        while (node && node !== document.body) {
            if (node.nodeType === 1 && (node.getAttribute('role') === 'dialog'
                || node.getAttribute('aria-modal') === 'true')) return true;
            node = node.parentElement || node.parentNode;
        }
        return false;
    }

    function isVisible(node) {
        var rect = node.getBoundingClientRect();
        if (rect.width <= 0 || rect.height <= 0) return false;
        var style = window.getComputedStyle ? window.getComputedStyle(node) : null;
        return !style || (style.visibility !== 'hidden' && style.visibility !== 'collapse');
    }

    function nativeControls(root, selector) {
        var nodes = root.querySelectorAll(selector || InteractiveSelector);
        var result = [];
        for (var i = 0; i < nodes.length; ++i) {
            if (!isInjected(nodes[i]) && !isInDialog(nodes[i])) result.push(nodes[i]);
        }
        return result;
    }

    function nativeChildren(node) {
        var result = [];
        for (var i = 0; i < node.children.length; ++i) {
            if (!isInjected(node.children[i])) result.push(node.children[i]);
        }
        return result;
    }

    function nativeTextNodes(root) {
        // The oreui host renderer's createInstance("fast-text") returns
        // document.createTextNode(""); it never inserts a <fast-text> element.
        // Walk childNodes so field boundaries are preserved without CSS hashes.
        var pending = root ? [root] : [];
        var result = [];
        while (pending.length) {
            var node = pending.pop();
            if (node.nodeType === 3) {
                var value = String(node.nodeValue || '');
                // Preserve a real empty field, but skip formatting whitespace.
                if (value === '' || normalizedText(value)) result.push(node);
                continue;
            }
            if (node.nodeType !== 1 || isInjected(node) || isInDialog(node)
                || /^(SCRIPT|STYLE|NOSCRIPT|TEXTAREA|INPUT|SELECT)$/i.test(node.tagName)) continue;
            for (var i = node.childNodes.length - 1; i >= 0; --i) pending.push(node.childNodes[i]);
        }
        return result;
    }

    function nativeTextValues(node) {
        var texts = nativeTextNodes(node);
        var result = [];
        for (var i = 0; i < texts.length; ++i) result.push(normalizedText(texts[i].nodeValue));
        return result;
    }

    // MyServersRoute/nce has no test IDs. Its direct children are the play
    // panel, name/description/address/port fields, then a single edit action.
    // Validate the whole shape rather than searching translated button labels.
    function isLegacyDetailsCard(card) {
        var children = nativeChildren(card);
        if (children.length < 5 || !isVisible(card) || isInjected(card) || isInDialog(card)
            || card.querySelector('input,textarea') || nativeControls(children[0]).length !== 1
            || nativeControls(children[children.length - 1]).length !== 1) return false;
        for (var i = 1; i < children.length - 1; ++i) {
            if (nativeTextValues(children[i]).length < 2) return false;
        }
        var port = nativeTextValues(children[children.length - 2])[0];
        if (!/^\d{1,5}$/.test(port) || Number(port) < 1 || Number(port) > 65535) return false;
        return true;
    }

    function findServerDetailsCard() {
        if (!document.body) return null;
        // Nae/_ae and pne expose semantic test IDs in the regular server page.
        // The smallest common ancestor also works when the narrow layout moves
        // the edit footer outside the details ScrollView.
        var edits = nativeControls(document.body, EditSelector);
        for (var i = 0; i < edits.length; ++i) {
            if (!isVisible(edits[i])) continue;
            var node = edits[i].parentElement;
            while (node && node !== document.body) {
                if (nativeControls(node, PlaySelector).length === 1
                    && nativeControls(node, EditSelector).length === 1
                    && nativeControls(node, AddressSelector).length === 1 && isVisible(node)) {
                    return node;
                }
                node = node.parentElement;
            }
        }

        var controls = nativeControls(document.body);
        var visited = [];
        for (var j = 0; j < controls.length; ++j) {
            if (!isVisible(controls[j])) continue;
            var card = controls[j].parentElement;
            while (card && card !== document.body) {
                if (visited.indexOf(card) !== -1) break;
                visited.push(card);
                if (isLegacyDetailsCard(card)) {
                    return card;
                }
                card = card.parentElement;
            }
        }
        return null;
    }

    function serverListCandidates(card) {
        // RK renders its rows in a sibling ScrollView. Search the closest shared
        // layout, excluding details, dialogs and our own content; no screen-size
        // thresholds or generated CSS classes are needed.
        var remembered = state.listScope && document.body.contains(state.listScope) ? state.listScope : null;
        var layout = card ? card.parentElement : remembered || document.body;
        while (layout) {
            var scrolls = layout.querySelectorAll(ScrollSelector);
            var result = [];
            for (var i = 0; i < scrolls.length; ++i) {
                var scroll = scrolls[i];
                if ((card && (scroll.contains(card) || card.contains(scroll))) || isInjected(scroll)
                    || scroll.querySelector(DetailsControlSelector)
                    || isInDialog(scroll) || !isVisible(scroll)) continue;
                var controls = nativeControls(scroll);
                for (var j = 0; j < controls.length; ++j) {
                    var row = controls[j];
                    if (!isVisible(row) || row.querySelector(InteractiveSelector)
                        || row.querySelector(DetailsControlSelector)) continue;
                    if (nativeTextValues(row)[0] && result.indexOf(row) === -1) result.push(row);
                }
            }
            if (result.length) {
                if (card) state.listScope = layout;
                return result;
            }
            if (layout === document.body) break;
            layout = layout.parentElement;
        }
        return [];
    }

    function externalServerRows(candidates, labels) {
        var servers = state.nativeServers;
        if (!servers || !servers.length || servers.length !== state.nativeListLength) return [];
        for (var s = 0; s < servers.length; ++s) {
            if (servers[s].index !== s || !servers[s].label) return [];
        }
        var owners = [];
        var groups = [];
        for (var i = 0; i < candidates.length; ++i) {
            var owner = candidates[i].parentElement;
            while (owner && owner !== document.body && owner.getAttribute('data-testid') !== 'scroll-view') owner = owner.parentElement;
            if (!owner || owner === document.body) continue;
            var group = owners.indexOf(owner);
            if (group === -1) { group = owners.length; owners.push(owner); groups.push([]); }
            groups[group].push(i);
        }
        var rows = [];
        var matches = 0;
        // RK.ItemList maps the complete externalServerWorlds collection last,
        // after Add/featured/creator groups. Validate that ordered suffix in
        // exactly one ScrollView; do not index all page buttons or let a
        // featured row with the same label consume the first external index.
        for (var g = 0; g < groups.length; ++g) {
            var indices = groups[g];
            var start = indices.length - servers.length;
            if (start < 0) continue;
            var same = true;
            for (var n = 0; n < servers.length; ++n) {
                if (labels[indices[start + n]] !== servers[n].label) { same = false; break; }
            }
            if (!same) continue;
            ++matches;
            rows = [];
            for (var r = 0; r < servers.length; ++r) rows.push(candidates[indices[start + r]]);
        }
        return matches === 1 ? rows : [];
    }

    function indexedEntries() {
        var byIndex = Object.create(null);
        for (var i = 0; i < state.order.length; ++i) {
            var address = state.order[i];
            var index = state.entries[address].serverIndex;
            if (index === undefined) continue;
            var anchor = state.indexAnchors[address];
            var server = state.nativeServers && state.nativeServers[index];
            if (!server || server.index !== index) {
                if (anchor && state.nativeServers) anchor.stale = true;
                continue;
            }
            if (!anchor) anchor = state.indexAnchors[address] = {index: index, slot: server.slot, stale: false};
            if (anchor.index !== index || anchor.slot !== server.slot) anchor.stale = true;
            if (anchor.stale) continue;
            var token = String(index);
            if (Object.prototype.hasOwnProperty.call(byIndex, token)) byIndex[token] = null;
            else byIndex[token] = address;
        }
        return byIndex;
    }

    function decorateListIcons(card) {
        var candidates = serverListCandidates(card);
        var matchedRows = [];
        var bindings = [];
        var labels = [];
        var labelCounts = Object.create(null);
        for (var r = 0; r < candidates.length; ++r) {
            var rowLabel = nativeTextValues(candidates[r])[0];
            labels.push(rowLabel);
            labelCounts[rowLabel] = (labelCounts[rowLabel] || 0) + 1;
        }
        var external = externalServerRows(candidates, labels);
        var indexed = indexedEntries();
        // Native rows are plain records from receiveNativeList. Build this
        // render's unique-label lookup once; duplicate labels remain rejected.
        var nativeByLabel = Object.create(null);
        if (state.nativeServers) {
            for (var n = 0; n < state.nativeServers.length; ++n) {
                var server = state.nativeServers[n];
                nativeByLabel[server.label] = Object.prototype.hasOwnProperty.call(nativeByLabel, server.label) ? null : server;
            }
        }
        for (var i = 0; i < candidates.length; ++i) {
            var row = candidates[i];
            var label = labels[i];
            var duplicates = labelCounts[label];
            var serverIndex = external.indexOf(row);
            var nativeRow = serverIndex >= 0 ? state.nativeServers[serverIndex] : null;
            var indexedAddress = serverIndex >= 0 ? indexed[String(serverIndex)] : '';
            if (!label || (duplicates !== 1 && !nativeRow)) continue;
            var address = '';
            var conflict = false;
            var fromIndex = false;
            // Real connection addresses remain authoritative. The caller's
            // explicit zero-based serverIndex supplies the otherwise missing
            // address association for unselected external rows.
            if (nativeRow) address = nativeRow.address;
            else if (state.nativeServers) {
                var namedServer = nativeByLabel[label];
                conflict = !namedServer;
                address = namedServer ? namedServer.address : '';
            }
            if (duplicates === 1 && state.verifiedCard && state.verifiedCard.label === label && state.verifiedCard.address) {
                if (address && address !== state.verifiedCard.address) conflict = true;
                else address = state.verifiedCard.address;
            }
            if (!address && !conflict && indexedAddress) {
                address = indexedAddress;
                fromIndex = true;
            }
            if (address && indexedAddress) {
                var suppliedParts = addressParts(indexedAddress);
                var verifiedParts = addressParts(address);
                var agrees = indexedAddress === address || (!suppliedParts.port
                    && addressHostKey(suppliedParts.host) === addressHostKey(verifiedParts.host));
                if (!agrees) {
                    if (state.indexAnchors[indexedAddress]) state.indexAnchors[indexedAddress].stale = true;
                }
            }
            if (!address && !conflict && duplicates === 1) {
                for (var p = 0; p < state.rowBindings.length; ++p) {
                    var previous = state.rowBindings[p];
                    if (previous.row === row && previous.label === label) {
                        address = previous.address;
                        break;
                    }
                }
            }
            if (!address || conflict) continue;
            // Recompute explicit index mappings on every render; do not retain
            // them as learned addresses after metadata changes or is removed.
            if (!fromIndex) bindings.push({row: row, label: label, address: address});
            var key = registeredAddress(address);
            var rowEntry = key ? state.entries[key] : null;
            var source = rowEntry ? imageSource(rowEntry.icon) : '';
            if (source) {
                var cell = null;
                for (var childIndex = 0; childIndex < row.children.length; ++childIndex) {
                    if (hasClass(row.children[childIndex], 'll-motd-list-icon-cell')) {
                        cell = row.children[childIndex];
                        break;
                    }
                }
                if (!cell) {
                    cell = element('div', 'll-motd-list-icon-cell');
                    var image = element('img', 'll-motd-list-icon');
                    image.alt = '';
                    cell.appendChild(image);
                    row.insertBefore(cell, row.firstChild);
                }
                cell.setAttribute('data-ll-motd-address', key);
                if (fromIndex) cell.setAttribute('data-ll-motd-index', String(serverIndex));
                else cell.removeAttribute('data-ll-motd-index');
                var icon = cell.firstElementChild;
                if (icon && icon.getAttribute('src') !== source) icon.setAttribute('src', source);
                matchedRows.push(row);
            }
        }
        state.rowBindings = bindings;
        var cells = document.getElementsByClassName('ll-motd-list-icon-cell');
        for (var k = cells.length - 1; k >= 0; --k) {
            var parent = cells[k].parentElement;
            if (parent && matchedRows.indexOf(parent) === -1) parent.removeChild(cells[k]);
        }
    }

    function detailsFieldValues(card) {
        var values = [];
        if (isLegacyDetailsCard(card)) {
            var rows = nativeChildren(card);
            for (var i = 1; i < rows.length - 1; ++i) values.push(nativeTextValues(rows[i])[0]);
            return values;
        }
        var address = nativeControls(card, AddressSelector)[0];
        var node = address ? address.parentElement : null;
        while (node && card.contains(node)) {
            var children = nativeChildren(node);
            var containsAddress = false;
            values = [];
            for (var j = 0; j < children.length; ++j) {
                var texts = nativeTextValues(children[j]);
                if (texts.length < 2 || children[j].querySelector(PlaySelector + ',' + EditSelector)) continue;
                values.push(texts[0]);
                if (children[j].contains(address)) containsAddress = true;
            }
            // Lae renders name/address/port as sibling panels; spacers and the
            // edit footer are not fields. Ignore labels, counts and button text.
            if (values.length >= 3 && containsAddress) return values;
            node = node.parentElement;
        }
        return [];
    }

    function detachNativeDetails() {
        var binding = state.nativeBinding;
        state.nativeBinding = null;
        state.nativeDetails = null;
        state.nativeSignature = '';
        state.nativeServers = null;
        state.nativeListValue = null;
        state.nativeListSignature = '';
        state.nativeListLength = null;
        state.rowBindings = [];
        for (var address in state.indexAnchors) state.indexAnchors[address].stale = true;
        if (!binding) return;
        try { binding.engine.off(binding.updatedEvent, binding.updated); } catch (error) {}
        try { binding.engine.off(binding.errorEvent, binding.error); } catch (error) {}
        try { binding.engine.off(binding.listEvent, binding.listUpdated); } catch (error) {}
        try { binding.engine.off(binding.listErrorEvent, binding.listError); } catch (error) {}
        // This listener does not own the UI facet subscription. Never send a
        // facet:request or facet:discard, and never remove the UI's handlers.
    }

    function receiveNativeDetails(value) {
        var details = value && typeof value === 'object' ? value.networkDetails : null;
        var loaded = !!details && value.hasLoadedDetails !== false;
        var label = details ? normalizedText(details.name) : '';
        var address = loaded && !isMaskedFieldAddress(details.address)
            ? addressFromFields([label, String(details.address || ''), String(details.port || '')]) : '';
        var next = address && label ? {address: address, label: label, port: addressParts(address).port} : null;
        var status = !loaded ? 'loading/unavailable' : !next ? 'missing native address/name/port' : 'ready';
        var signature = JSON.stringify([status, next ? next.address : '', label]);
        var changed = signature !== state.nativeSignature;
        state.nativeSignature = signature;
        state.nativeDetails = next;
        // Our listener can run before oreui's own facet listener. Let the whole
        // engine event finish updating the UI before binding data to a card.
        if (changed) scheduleRender();
    }

    function receiveNativeList(value, refresh) {
        if (!refresh) state.nativeListValue = value && typeof value === 'object' ? value : null;
        var items = null;
        var entries = null;
        var length = null;
        var mapped = false;
        try {
            items = value && value.externalServerWorlds;
            if (items && (typeof items === 'object' || typeof items === 'function')) {
                length = Number(items.length);
                // xae/Zoe use length/map, not Array.isArray. Cohtml collections
                // can expose that interface without being JavaScript Arrays.
                if (isFinite(length) && length >= 0 && length <= 4096 && Math.floor(length) === length) {
                    entries = [];
                    mapped = typeof items.map === 'function';
                    if (mapped) items.map(function (item) { if (entries.length < 4096) entries.push(item); return item; });
                    else for (var at = 0; at < length; ++at) entries.push(items[at]);
                    if (entries.length !== length) {
                        entries = null;
                    }
                }
            }
        } catch (error) {
            entries = null;
        }
        var servers = entries ? [] : null;
        var signature = [];
        if (servers) {
            for (var i = 0; i < entries.length; ++i) {
                var item = entries[i];
                if (!item || typeof item !== 'object') continue;
                var label = normalizedText(item.name);
                var address = !isMaskedFieldAddress(item.address)
                    ? addressFromFields([label, String(item.address || ''), String(item.port || '')]) : '';
                var slot = typeof item.id === 'number' || typeof item.id === 'string'
                    ? typeof item.id + ':' + String(item.id) : 'position:' + i + ':' + label;
                servers.push({label: label, address: address, index: i, slot: slot});
                signature.push([item.id, label, address]);
            }
        }
        var token = JSON.stringify(servers ? signature : null);
        // Renames, removals or replacement of a saved item invalidate learned
        // DOM bindings. A ping/MOTD refresh leaves their identity intact.
        if (token !== state.nativeListSignature) state.rowBindings = [];
        state.nativeListSignature = token;
        state.nativeServers = servers;
        state.nativeListLength = length;
        if (!refresh) scheduleRender();
    }

    function observeNativeDetails() {
        var engine = window.engine;
        if (state.nativeBinding && state.nativeBinding.engine === engine) return;
        if (state.nativeBinding) detachNativeDetails();
        if (!engine || typeof engine.on !== 'function' || typeof engine.off !== 'function') {
            return;
        }
        var binding = {engine: engine, updatedEvent: 'facet:updated:vanilla.networkWorldDetails',
            errorEvent: 'facet:error:vanilla.networkWorldDetails',
            listEvent: 'facet:updated:vanilla.externalServerWorldList',
            listErrorEvent: 'facet:error:vanilla.externalServerWorldList'};
        binding.updated = function (value) {
            if (state.nativeBinding !== binding) return;
            runSafely(function () { receiveNativeDetails(value); });
        };
        binding.error = function (error) {
            if (state.nativeBinding !== binding) return;
            state.nativeDetails = null;
            state.nativeSignature = '';
            runSafely(scheduleRender);
        };
        binding.listUpdated = function (value) {
            if (state.nativeBinding !== binding) return;
            runSafely(function () { receiveNativeList(value); });
        };
        binding.listError = function () {
            if (state.nativeBinding !== binding) return;
            state.nativeServers = null;
            state.nativeListValue = null;
            state.nativeListSignature = '';
            state.rowBindings = [];
            state.nativeListLength = null;
            runSafely(scheduleRender);
        };
        state.nativeBinding = binding;
        try {
            engine.on(binding.updatedEvent, binding.updated);
            engine.on(binding.errorEvent, binding.error);
            engine.on(binding.listEvent, binding.listUpdated);
            engine.on(binding.listErrorEvent, binding.listError);
        } catch (error) {
            detachNativeDetails();
            throw error;
        }
    }

    function isMaskedFieldAddress(value) {
        // This is the placeholder observed in the real UI reports, not an
        // inferred host. It can only be resolved through the native model.
        return /^(?:x{1,3}\.){3}x{1,3}$/i.test(normalizedText(value));
    }

    function nativeAddressForFields(values) {
        var details = state.nativeDetails;
        if (!details || values.length < 3) return '';
        // This is UI-to-model correlation, not an identity field supplied by the
        // caller. Nae renders this exact native name and port in the detail card.
        if (normalizedText(values[0]) !== details.label) return '';
        if (String(Number(values[values.length - 1])) !== details.port) return '';
        var displayedHost = normalizedText(values[values.length - 2]);
        if (!isMaskedFieldAddress(displayedHost) && addressFromFields(values) !== details.address) return '';
        return details.address;
    }

    function entryForCard(card) {
        var values = detailsFieldValues(card);
        var address = addressFromFields(values);
        var masked = values.length >= 3 && isMaskedFieldAddress(values[values.length - 2]);
        var key = masked ? '' : registeredAddress(address);
        var nativeAddress = nativeAddressForFields(values);
        if (!key && nativeAddress) key = registeredAddress(nativeAddress);
        // Retain only verified UI identity for matching the current list row.
        state.verifiedCard = {label: values[0], address: masked ? nativeAddress : address};
        return key ? state.entries[key] : null;
    }

    function findPlayBar(card) {
        var children = nativeChildren(card);
        for (var i = 0; i < children.length; ++i) {
            if (nativeControls(children[i], PlaySelector).length === 1
                && !children[i].querySelector(EditSelector + ',' + AddressSelector)) return children[i];
        }
        return isLegacyDetailsCard(card) ? children[0] : null;
    }

    function applyNativeFlow(card) {
        var next = [];
        function mark(node, name) {
            for (var i = 0; i < next.length; ++i) {
                if (next[i].node === node && next[i].name === name) return;
            }
            next.push({node: node, name: name});
            addClass(node, name);
        }
        if (card) {
            var viewport = card.parentElement;
            while (viewport && viewport !== document.body) {
                if (viewport.getAttribute('data-testid') === 'scroll-view') {
                    // ap's -0.8rem viewport margins extend beneath the sibling
                    // scrollbar. Preserve its focus padding while reserving
                    // the scrollbar's actual layout space.
                    mark(viewport, 'll-motd-flow-viewport');
                    break;
                }
                viewport = viewport.parentElement;
            }
            // ap's loading content and its nested ScrollView are flex:1 with
            // min-height:0. Fixed-height hero/README siblings otherwise consume
            // all available space and collapse the native fields to zero.
            // Keep the outer native viewport; let only the inner details flow
            // at their natural height. Original controls and handlers stay put.
            mark(card, 'll-motd-flow-natural');
            var scrolls = card.querySelectorAll(ScrollSelector);
            for (var s = 0; s < scrolls.length; ++s) {
                var scroll = scrolls[s];
                if (isInjected(scroll) || isInDialog(scroll)
                    || !scroll.querySelector(DetailsFieldSelector)) continue;
                mark(scroll, 'll-motd-flow-scroll');
                var node = scroll;
                while (node && node !== card) {
                    mark(node, 'll-motd-flow-natural');
                    node = node.parentElement;
                }
                var children = nativeChildren(scroll);
                for (var c = 0; c < children.length; ++c) {
                    if (children[c].querySelector(DetailsFieldSelector)) {
                        mark(children[c], 'll-motd-flow-natural');
                    }
                }
            }
        }
        for (var old = 0; old < state.flowNodes.length; ++old) {
            var previous = state.flowNodes[old];
            var keep = false;
            for (var n = 0; n < next.length; ++n) {
                if (previous.node === next[n].node && previous.name === next[n].name) { keep = true; break; }
            }
            if (!keep) removeClass(previous.node, previous.name);
        }
        state.flowNodes = next;
        state.flowCard = card;
    }

    function clearTopHero() {
        var heroes = document.getElementsByClassName('ll-motd-top-hero');
        for (var i = heroes.length - 1; i >= 0; --i) {
            if (heroes[i].parentElement) heroes[i].parentElement.removeChild(heroes[i]);
        }
        var bars = document.getElementsByClassName('ll-motd-native-topbar');
        for (var j = bars.length - 1; j >= 0; --j) {
            bars[j].style.display = bars[j].llMotdNativeDisplay || '';
            removeClass(bars[j], 'll-motd-native-topbar');
        }
    }

    function heroImageToken(image) {
        if (!image) return '';
        var source = imageSource(image);
        return [
            image.fit || '',
            image.width || 0,
            image.height || 0,
            source.length,
            source.slice(0, 48),
            source.slice(-48)
        ].join(':');
    }

    function heroSignature(heroData) {
        heroData = heroData || {};
        var images = heroData.images || [];
        var layers = heroData.layers || [];
        var value = [
            heroData.transition || '',
            heroData.intervalMs || 0,
            heroData.transitionMs || 0,
            heroData.aspectRatio || 0,
            JSON.stringify(heroData.overlay || null)
        ];
        for (var i = 0; i < images.length; ++i) value.push('i' + heroImageToken(images[i]));
        for (var j = 0; j < layers.length; ++j) {
            var layer = layers[j];
            value.push([
                'l',
                layer.x || 0,
                layer.y || 0,
                layer.width || 0,
                layer.height || 0,
                layer.opacity === undefined ? 1 : layer.opacity,
                layer.parallax || 0,
                heroImageToken(layer.image)
            ].join(':'));
        }
        return value.join('|');
    }

    function createHeroSlides(heroData) {
        var slides = element('div', 'll-motd-slideshow');
        registerSlideshow(slides, heroData, 6000, 700);

        var overlay = element('div', 'll-motd-hero-overlay');
        applyBackgroundPaint(overlay, heroData.overlay);
        slides.appendChild(overlay);

        var layers = heroData.layers || [];
        for (var i = 0; i < layers.length; ++i) {
            var item = layers[i];
            var source = imageSource(item.image);
            if (!source) continue;
            var layer = element('div', 'll-motd-hero-layer');
            layer.style.left = ((Number(item.x) || 0) * 100) + '%';
            layer.style.top = ((Number(item.y) || 0) * 100) + '%';
            layer.style.width = ((Number(item.width) || 0) * 100) + '%';
            layer.style.height = ((Number(item.height) || 0) * 100) + '%';
            layer.style.opacity = item.opacity === undefined ? '1' : String(item.opacity);
            var picture = element('img', 'll-motd-hero-layer-image');
            picture.src = source;
            picture.alt = '';
            picture.style.objectFit = imageFit(item.image);
            picture.style.opacity = String(imageOpacity(item.image));
            layer.appendChild(picture);
            layer.llMotdParallax = Number(item.parallax) || 0;
            slides.appendChild(layer);
        }
        return slides;
    }

    function nativePlayButton(bar) {
        var marked = nativeControls(bar, PlaySelector);
        if (marked.length === 1) return marked[0];
        var controls = nativeControls(bar);
        return controls.length === 1 ? controls[0] : null;
    }

    function createHeroActions(bar) {
        var actions = bar.cloneNode(true);
        actions.style.display = '';
        actions.className = String(actions.className || '') + ' ll-motd-hero-actions';
        removeClass(actions, 'll-motd-native-topbar');
        var nativePlay = nativePlayButton(bar);
        var clonedPlay = actions.querySelector(PlaySelector);
        if (!clonedPlay) {
            var clonedButtons = actions.querySelectorAll(InteractiveSelector);
            if (clonedButtons.length === 1) clonedPlay = clonedButtons[0];
        }
        // A DOM clone is not registered with oreui's focus registry. Do not
        // duplicate runtime focus/landmark IDs owned by the original controls.
        var focusNodes = actions.querySelectorAll('[data-focusable-id],[data-landmark-id],[id]');
        actions.removeAttribute('data-focusable-id');
        actions.removeAttribute('data-landmark-id');
        actions.removeAttribute('id');
        for (var i = 0; i < focusNodes.length; ++i) {
            focusNodes[i].removeAttribute('data-focusable-id');
            focusNodes[i].removeAttribute('data-landmark-id');
            focusNodes[i].removeAttribute('id');
        }
        if (nativePlay && clonedPlay) {
            clonedPlay.setAttribute('data-testid', 'll-motd-server-play-button');
            clonedPlay.onclick = function (event) {
                event.stopPropagation();
                nativePlay.click();
            };
        }
        return actions;
    }

    function buildTopHero(card, bar, heroData) {
        var hero = element('section', 'll-motd-top-hero');
        hero.id = 'll-motd-top-hero';
        hero.appendChild(createHeroSlides(heroData));
        hero.appendChild(createHeroActions(bar));
        card.insertBefore(hero, card.firstElementChild);
        return hero;
    }

    function applyHeroBackground(entry, card) {
        var heroData = entry.hero;
        var hasImages = heroData && heroData.images && heroData.images.length > 0;
        var bar = hasImages && card ? findPlayBar(card) : null;
        if (!hasImages || !card || !bar) {
            clearTopHero();
            return;
        }

        var nativePlay = nativePlayButton(bar);
        var actionState = JSON.stringify([
            compactText(bar),
            nativePlay ? String(nativePlay.className || '') : '',
            nativePlay ? nativePlay.getAttribute('disabled') : null,
            nativePlay ? nativePlay.getAttribute('aria-disabled') : null
        ]);
        var signature = heroSignature(heroData);
        var hero = document.getElementById('ll-motd-top-hero');
        if (hero && hero.parentElement === card) {
            if (hero.llMotdHeroSignature !== signature && hero.firstElementChild) {
                hero.replaceChild(createHeroSlides(heroData), hero.firstElementChild);
                hero.llMotdHeroSignature = signature;
            }
            if (hero.llMotdActionState !== actionState || hero.llMotdNativePlay !== nativePlay) {
                var currentActions = hero.getElementsByClassName('ll-motd-hero-actions')[0];
                var nextActions = createHeroActions(bar);
                if (currentActions) hero.replaceChild(nextActions, currentActions);
                else hero.appendChild(nextActions);
                hero.llMotdActionState = actionState;
                hero.llMotdNativePlay = nativePlay;
            }
            if (String(bar.className || '').indexOf('ll-motd-native-topbar') === -1) {
                bar.llMotdNativeDisplay = bar.style.display;
                addClass(bar, 'll-motd-native-topbar');
            }
            bar.style.display = 'none';
            return;
        }

        clearTopHero();
        hero = buildTopHero(card, bar, heroData);
        hero.llMotdHeroSignature = signature;
        hero.llMotdActionState = actionState;
        hero.llMotdNativePlay = nativePlay;
        bar.llMotdNativeDisplay = bar.style.display;
        bar.style.display    = 'none';
        addClass(bar, 'll-motd-native-topbar');
    }

    function applyReadmeBackground(body, image, overlayPaint) {
        var signature = JSON.stringify([image || null, overlayPaint || null]);
        var existing = body.getElementsByClassName('ll-motd-readme-background')[0];
        var source = imageSource(image);
        if (!source) {
            if (existing && existing.parentElement) existing.parentElement.removeChild(existing);
            body.llMotdReadmeBackgroundSignature = '';
            return;
        }
        if (existing && body.llMotdReadmeBackgroundSignature === signature) return;

        var background = element('div', 'll-motd-readme-background');
        var picture = element('img', 'll-motd-readme-background-image');
        picture.src = source;
        picture.alt = '';
        picture.style.objectFit = imageFit(image);
        picture.style.imageRendering = image && image.smooth === false ? 'pixelated' : 'auto';
        picture.style.opacity = String(imageOpacity(image));
        var overlay = element('div', 'll-motd-readme-background-overlay');
        if (overlayPaint) applyBackgroundPaint(overlay, overlayPaint);
        background.appendChild(picture);
        background.appendChild(overlay);
        if (existing) body.replaceChild(background, existing);
        else body.insertBefore(background, body.firstChild);
        body.llMotdReadmeBackgroundSignature = signature;
    }

    function buildReadme(entry) {
        var panel = element('section');
        panel.id = 'll-motd-readme';
        panel.setAttribute('data-ll-motd-address', entry.serverAddress);
        panel.setAttribute('data-ll-motd-version', String(state.versions[entry.serverAddress] || 0));

        var body = element('div', 'll-motd-readme-body');
        var content = createNode(entry.root || {});
        content.className = 'll-motd-readme-content';
        content.style.width = '100%';
        applyReadmeBackground(body, entry.readmeBackground, entry.readmeOverlay);
        body.appendChild(content);
        panel.appendChild(body);
        panel.appendChild(element('div', 'll-motd-readme-spacer'));
        return panel;
    }

    function removeReadme() {
        var existing = document.getElementById('ll-motd-readme');
        if (existing && existing.parentElement) existing.parentElement.removeChild(existing);
    }

    function updateReadme(panel, entry) {
        panel.setAttribute('data-ll-motd-address', entry.serverAddress);
        panel.setAttribute('data-ll-motd-version', String(state.versions[entry.serverAddress] || 0));
        var body = panel.getElementsByClassName('ll-motd-readme-body')[0];
        if (!body) return;
        var content = body.getElementsByClassName('ll-motd-readme-content')[0];
        if (content && content.llMotdKind === 'node') patchNode(content, entry.root || {});
        else {
            clearNode(body);
            content = createNode(entry.root || {});
            content.className = 'll-motd-readme-content';
            content.style.width = '100%';
            body.appendChild(content);
        }
        applyReadmeBackground(body, entry.readmeBackground, entry.readmeOverlay);
    }

    function mountReadme(panel, card) {
        if (panel.parentElement !== card) card.appendChild(panel);
        if (panel.style.display !== 'flex') panel.style.display = 'flex';
        if (panel.style.width !== '100%') panel.style.width = '100%';
    }

    function scheduleRender() {
        if (state.renderQueued) return;
        state.renderQueued = true;
        window.setTimeout(function () {
            state.renderQueued = false;
            safeRender();
        }, 0);
    }

    function renderInline() {
        if (!document.body || !document.head) return;
        ensureStyle();
        state.verifiedCard = null;
        // React may replace a native class attribute between renders. Restore
        // our bounded layout classes before testing the edit anchor's geometry.
        if (state.flowCard && document.body.contains(state.flowCard) && isVisible(state.flowCard)) {
            applyNativeFlow(state.flowCard);
        }
        var card = state.order.length ? findServerDetailsCard() : null;
        var entry = card ? entryForCard(card) : null;
        decorateListIcons(card);
        if (!state.order.length) {
            removeReadme();
            applyHeroBackground({}, null);
            applyNativeFlow(null);
            return;
        }

        if (!card || !entry) {
            var hidden = document.getElementById('ll-motd-readme');
            if (hidden) hidden.style.display = 'none';
            applyHeroBackground({}, null);
            applyNativeFlow(null);
            return;
        }
        applyNativeFlow(card);
        applyHeroBackground(entry, card);
        var existing = document.getElementById('ll-motd-readme');
        if (existing && existing.getAttribute('data-ll-motd-address') === entry.serverAddress) {
            updateReadme(existing, entry);
            mountReadme(existing, card);
            return;
        }
        removeReadme();

        var panel = buildReadme(entry);
        mountReadme(panel, card);
    }

    function update(value) {
        var address = value ? serverAddressKey(value.serverAddress) : '';
        if (!address) {
            return;
        }
        var entry = Object.create(null);
        for (var property in value) {
            if (Object.prototype.hasOwnProperty.call(value, property)) entry[property] = value[property];
        }
        entry.serverAddress = address;
        if (Object.prototype.hasOwnProperty.call(entry, 'serverIndex')) {
            var index = entry.serverIndex;
            if (typeof index !== 'number' || !isFinite(index) || index < 0 || Math.floor(index) !== index || index > 9007199254740991) {
                delete entry.serverIndex;
            }
        }
        delete state.indexAnchors[address];
        if (!state.entries[address]) state.order.push(address);
        state.entries[address] = entry;
        state.versions[address] = (state.versions[address] || 0) + 1;
        safeRender();
        if (window.setTimeout) {
            window.setTimeout(function () { safeRender(); }, 300);
            window.setTimeout(function () { safeRender(); }, 1200);
        }
    }

    function remove(value) {
        var address = serverAddressKey(typeof value === 'string' ? value : value && value.serverAddress);
        if (!address) return;
        delete state.entries[address];
        delete state.versions[address];
        delete state.indexAnchors[address];
        for (var i = state.order.length - 1; i >= 0; --i) {
            if (state.order[i] === address) state.order.splice(i, 1);
        }
        var panel = document.getElementById('ll-motd-readme');
        if (panel && panel.getAttribute('data-ll-motd-address') === address) removeReadme();
        safeRender();
        if (window.setTimeout) window.setTimeout(function () { safeRender(); }, 300);
    }

    function observeDom() {
        if (state.mutationObserver || !window.MutationObserver || !document.body) return;
        var observer = new MutationObserver(function (records) {
            // Our own animations must not trigger another render cycle.
            // Observe native child/marker changes only.
            runSafely(function () {
                for (var i = 0; i < records.length; ++i) {
                    var record = records[i];
                    if (isInjected(record.target)) continue;
                    if (record.type === 'attributes') { safeRender(); return; }
                    if (record.type === 'characterData') { safeRender(); return; }
                    var ownChanges = true;
                    var groups = [record.addedNodes, record.removedNodes];
                    for (var g = 0; g < groups.length; ++g) {
                        for (var n = 0; n < groups[g].length; ++n) {
                            if (!isInjected(groups[g][n])) ownChanges = false;
                        }
                    }
                    if (!ownChanges) { safeRender(); return; }
                }
            });
        });
        observer.observe(document.body, {childList: true, subtree: true, characterData: true, attributes: true,
            attributeFilter: ['data-focusable-id', 'data-testid', 'hidden', 'aria-hidden', 'disabled', 'aria-disabled']});
        state.mutationObserver = observer;
    }

    // Publish before styles/timers/observers so a renderer error cannot make the
    // native caller believe that the script never installed its API.
    window.__levilaminaMotd = {
        update: update,
        remove: remove,
        render: safeRender
    };
    runSafely(function () {
        window.addEventListener('unload', detachNativeDetails);
        document.addEventListener('scroll', function () { safeRender(); }, true);
        window.addEventListener('resize', function () { safeRender(); });
        document.addEventListener('DOMContentLoaded', function () { safeRender(); });
    });
    runSafely(function () {
        state.renderTimer = window.setInterval(function () { safeRender(); }, 700);
    });
    runSafely(function () {
        state.obfuscationTimer = window.setInterval(function () { runSafely(updateObfuscatedText); }, 110);
    });
    runSafely(function () {
        state.slideshowTimer = window.setInterval(function () { runSafely(advanceSlideshows); }, 100);
    });
    runSafely(function () {
        state.paintTimer = window.setInterval(function () { runSafely(updateAnimatedPaints); }, 80);
    });

    safeRender();
})();
)LLMOTD";

} // namespace ll::motd::detail
