/* levimc-kit vanilla runtime for pages without React (static pages, Doxygen): the GlobalBar's theme and
   language menus, <details> menus, and the footer year. static/build-static.mjs builds kit.js from this file
   (it fills in the shared preference code and the chrome strings). Include once, deferred:
     <script src="kit.js" defer></script>
   after the pre-paint script (theme-init.js) in <head>.
   - Theme: Auto (default) / Light / Dark, stored for every LeviMC site (cookie levimc_theme on levimc.org).
   - Language: the chrome (bar, footer, skip link) follows the visitor's language preference (cookie levimc_lang);
     choosing one in the menu stores it for every LeviMC site and translates the chrome in place. */
(function () {
  'use strict';
  /*__PREFS_CORE__*/
  var STR = /*__STRINGS__*/ {};
  var NAMES = /*__NAMES__*/ {};
  var root = document.documentElement;
  var mq = window.matchMedia ? window.matchMedia('(prefers-color-scheme: dark)') : null;
  var doxygen = root.classList.contains('dark-mode') || root.classList.contains('light-mode') || root.hasAttribute('data-kit-doxygen');
  var THEME_KEYS = { auto: 'themeAuto', light: 'themeLight', dark: 'themeDark' };

  function each(sel, fn) {
    var n = document.querySelectorAll(sel);
    for (var i = 0; i < n.length; i++) fn(n[i]);
  }
  function uiLocale(tag) {
    var L = [];
    for (var k in STR) if (Object.prototype.hasOwnProperty.call(STR, k)) L.push({ c: k, l: k });
    var i = ml(tag, L);
    return i < 0 ? 'en' : L[i].c;
  }
  function chromeLocale() {
    var a = document.querySelector('[data-kit-lang-value].is-active');
    return a ? a.getAttribute('data-kit-lang-value') : uiLocale(root.lang || 'en');
  }
  function strings() {
    return STR[chromeLocale()] || STR.en;
  }

  // ------------------------------------------------------------------ theme
  function readTheme() {
    var v = rp('theme');
    return v === 'light' || v === 'dark' ? v : 'auto';
  }
  function sysDark() {
    return !!(mq && mq.matches);
  }
  function applyTheme(pref, persist) {
    var dark = pref === 'dark' || (pref === 'auto' && sysDark());
    root.classList.add('kit-no-transition');
    root.classList.toggle('dark', dark);
    if (doxygen) {
      root.classList.toggle('dark-mode', dark);
      root.classList.toggle('light-mode', !dark);
    }
    root.setAttribute('data-theme-pref', pref);
    root.style.colorScheme = dark ? 'dark' : 'light';
    if (persist) wp('theme', pref);
    requestAnimationFrame(function () {
      requestAnimationFrame(function () {
        root.classList.remove('kit-no-transition');
      });
    });
    labelTheme();
  }
  function labelTheme() {
    var S = strings();
    var pref = root.getAttribute('data-theme-pref') || 'auto';
    if (pref === 'system') pref = 'auto';
    each('[data-kit-theme-toggle]', function (b) {
      b.setAttribute('aria-label', S.theme + ': ' + S[THEME_KEYS[pref]]);
    });
    each('[data-kit-theme-value]', function (o) {
      o.setAttribute('aria-checked', String(o.getAttribute('data-kit-theme-value') === pref));
    });
  }

  // ------------------------------------------------------------------ language (chrome only)
  // Only the chrome is translated: the bar, the footer, the skip link (each gets lang=<code>). The page's own
  // content — including copies of chrome strings in it, e.g. project blurbs on the 404 page — stays as written.
  var CHROME = '.kit-gbar, .kit-footer, .kit-skip-link, .kit-dox-drawer-network';
  function inChrome(el) {
    return el.matches(CHROME) || !!el.closest(CHROME);
  }
  function translate(code) {
    var S = STR[code];
    if (!S) return;
    each('[data-kit-t]', function (el) {
      if (!inChrome(el)) return;
      var k = el.getAttribute('data-kit-t');
      var v = k.indexOf('projectBlurbs.') === 0 ? S.projectBlurbs[k.slice(14)] : S[k];
      if (typeof v === 'string') el.textContent = v;
    });
    each('[data-kit-t-aria]', function (el) {
      if (!inChrome(el)) return;
      var v = S[el.getAttribute('data-kit-t-aria')];
      if (typeof v === 'string') el.setAttribute('aria-label', v);
    });
    each('[data-kit-t-title]', function (el) {
      if (!inChrome(el)) return;
      var v = S[el.getAttribute('data-kit-t-title')];
      if (typeof v === 'string') el.setAttribute('title', v);
    });
    each(CHROME, function (el) {
      el.setAttribute('lang', code);
    });
    // the language menu: check the new language, move the check mark, relabel the trigger
    var check = null;
    each('[data-kit-lang-value]', function (o) {
      var on = o.getAttribute('data-kit-lang-value') === code;
      o.setAttribute('aria-checked', String(on));
      o.classList.toggle('is-active', on);
      var c = o.querySelector('.kit-menu-check');
      if (c && !on) {
        check = c;
        c.parentNode.removeChild(c);
      }
    });
    each('[data-kit-lang-value].is-active', function (o) {
      if (check && !o.querySelector('.kit-menu-check')) o.appendChild(check.cloneNode(true));
    });
    each('[data-kit-locale-switcher]', function (s) {
      s.setAttribute('aria-label', S.language + ': ' + (NAMES[code] || code));
      var l = s.querySelector('.kit-menu-trigger-label');
      if (l) {
        l.textContent = NAMES[code] || code;
        l.setAttribute('lang', code);
      }
    });
    labelTheme();
  }
  // A project's own row on its Doxygen pages (static/doxygen/header.html): its section tabs follow the
  // preference too, mapped to the project's locales (<… data-kit-site-locales='[{"c":"zh","l":"zh"}]'>; each
  // <a data-kit-l10n='{"zh":["用户指南","/LeviLamina/zh/…"]}'> carries its other-locale label and URL).
  function localizeSite(pref) {
    each('[data-kit-site-locales]', function (row) {
      var L;
      try {
        L = JSON.parse(row.getAttribute('data-kit-site-locales'));
      } catch (e) {
        return;
      }
      var i = pref ? ml(pref, L) : -1;
      var loc = i < 0 ? null : L[i];
      var links = row.querySelectorAll('[data-kit-l10n]');
      for (var j = 0; j < links.length; j++) {
        var a = links[j];
        var m;
        try {
          m = JSON.parse(a.getAttribute('data-kit-l10n'));
        } catch (e) {
          continue;
        }
        // a value is [label, url], or just the url (links whose content is not text, e.g. the logo)
        var hrefOnly = false;
        for (var k in m) if (typeof m[k] === 'string') hrefOnly = true;
        if (!a.hasAttribute('data-kit-l10n-default')) a.setAttribute('data-kit-l10n-default', JSON.stringify([hrefOnly ? null : a.textContent, a.getAttribute('href')]));
        var d = JSON.parse(a.getAttribute('data-kit-l10n-default'));
        var x = loc ? m[loc.c] : null;
        var v = x ? (hrefOnly ? [null, x] : x) : d;
        if (v[0] !== null) a.textContent = v[0];
        a.setAttribute('href', v[1]);
        if (x && !hrefOnly) a.setAttribute('lang', loc.l);
        else a.removeAttribute('lang');
      }
    });
  }
  function applyLanguagePref() {
    var p = rp('lang');
    var code = p ? uiLocale(p) : null;
    if (code && code !== chromeLocale() && document.querySelector('[data-kit-lang-value]')) translate(code);
    localizeSite(p);
    root.classList.remove('kit-chrome-pending');
  }

  // ------------------------------------------------------------------ menus + clicks
  document.addEventListener('click', function (e) {
    var t = e.target && e.target.closest ? e.target : null;
    var th = t && t.closest('[data-kit-theme-value]');
    if (th) {
      applyTheme(th.getAttribute('data-kit-theme-value'), true);
    }
    var lg = t && t.closest('[data-kit-lang-value]');
    // a modified click on a link opens it elsewhere: not a choice, the preference stays as it is
    if (lg && !(lg.tagName === 'A' && (e.ctrlKey || e.metaKey || e.shiftKey || e.altKey || e.button !== 0))) {
      var code = lg.getAttribute('data-kit-lang-value');
      wp('lang', code);
      if (lg.tagName === 'BUTTON') {
        translate(uiLocale(code));
        localizeSite(code);
      }
    }
    // close <details class="kit-menu"> when clicking outside or choosing an item inside
    each('details.kit-menu[open]', function (d) {
      var inside = t && d.contains(t);
      var choice = inside && t.closest('.kit-menu-panel a, .kit-menu-panel button');
      if (!inside || choice) {
        d.open = false;
        if (choice && choice.tagName === 'BUTTON') {
          var s = d.querySelector('summary');
          if (s) s.focus();
        }
      }
    });
  });
  // menu keys for role="menu" panels (the language and theme menus; copy of components/menu.ts menuKey):
  // ArrowDown/ArrowUp on the trigger open the menu on the first/last item, inside they move (wrapping),
  // Home/End jump; a menu opened with Enter/Space focuses its checked item
  var pointerOpen = false;
  function menuItems(d) {
    var p = d.querySelector(':scope > [role="menu"]');
    return p ? Array.prototype.slice.call(p.querySelectorAll('[role^="menuitem"]')) : [];
  }
  document.addEventListener('pointerdown', function (e) {
    pointerOpen = !!(e.target && e.target.closest && e.target.closest('details.kit-menu'));
  });
  document.addEventListener('keydown', function (e) {
    pointerOpen = false;
    if (e.key === 'Escape') {
      each('details.kit-menu[open]', function (d) {
        d.open = false;
        var s = d.querySelector('summary');
        if (s) s.focus();
      });
      return;
    }
    if (e.altKey || e.ctrlKey || e.metaKey) return;
    var d = e.target && e.target.closest ? e.target.closest('details.kit-menu') : null;
    if (!d) return;
    var items = menuItems(d);
    if (!items.length) return;
    var sum = e.target.closest('summary');
    var onTrigger = !!sum && sum.parentNode === d;
    var i = items.indexOf(document.activeElement);
    var n = items.length;
    var next;
    if (e.key === 'ArrowDown') next = i < 0 ? 0 : (i + 1) % n;
    else if (e.key === 'ArrowUp') next = i < 0 ? n - 1 : (i - 1 + n) % n;
    else if ((e.key === 'Home' || e.key === 'End') && d.open && !onTrigger) next = e.key === 'Home' ? 0 : n - 1;
    else return;
    if (!d.open) {
      if (!onTrigger) return;
      d.open = true;
    }
    e.preventDefault();
    items[next].focus();
  });
  // tabbing out of an open menu closes it
  document.addEventListener('focusout', function (e) {
    var to = e.relatedTarget;
    if (!to) return;
    each('details.kit-menu[open]', function (d) {
      if (d.contains(e.target) && !d.contains(to)) d.open = false;
    });
  });
  document.addEventListener(
    'toggle',
    function (e) {
      var d = e.target;
      if (!d || !d.matches || !d.matches('details.kit-menu') || !d.open) return;
      each('details.kit-menu[open]', function (o) {
        if (o !== d && !o.contains(d)) o.open = false;
      });
      var items = menuItems(d);
      if (!pointerOpen && items.length && document.activeElement === d.querySelector(':scope > summary')) {
        var c = null;
        for (var i = 0; i < items.length; i++) if (items[i].getAttribute('aria-checked') === 'true') c = c || items[i];
        (c || items[0]).focus();
      }
      pointerOpen = false;
    },
    true,
  );

  // ------------------------------------------------------------------ live updates
  if (mq && mq.addEventListener)
    mq.addEventListener('change', function () {
      if (readTheme() === 'auto') applyTheme('auto', false);
    });
  function resync() {
    var p = readTheme();
    if (root.getAttribute('data-theme-pref') !== p) applyTheme(p, false);
    applyLanguagePref();
  }
  window.addEventListener('storage', function (e) {
    if (e.key === PS.theme || e.key === PS.lang) resync();
  });
  document.addEventListener('visibilitychange', function () {
    if (document.visibilityState === 'visible') resync();
  });

  // Doxygen: its regions become landmarks, and its phone menu button + search, which menu.js inserts before
  // #main-nav, move into the project's row (header#titlearea) where they are shown — so everything on the page
  // is inside a landmark. A MutationObserver catches the insertion before it is painted.
  var dtop = document.getElementById('top');
  var drow = document.getElementById('titlearea');
  if (doxygen && dtop && drow && drow.classList.contains('kit-dox-row')) {
    // landmarks for Doxygen's own regions (it emits plain <div>s)
    var LANDMARKS = [
      ['main-nav', 'navigation', 'Doxygen'],
      ['side-nav', 'navigation', 'Index'],
      ['doc-content', 'main', ''],
      ['nav-path', 'navigation', 'Breadcrumb'],
    ];
    for (var li = 0; li < LANDMARKS.length; li++) {
      var le = document.getElementById(LANDMARKS[li][0]);
      if (le && !le.hasAttribute('role') && !(LANDMARKS[li][1] === 'main' && document.querySelector('main, [role="main"]'))) {
        le.setAttribute('role', LANDMARKS[li][1]);
        if (LANDMARKS[li][2]) le.setAttribute('aria-label', LANDMARKS[li][2]);
      }
    }
    var adopt = function () {
      var m = dtop.querySelector(':scope > .sm-dox');
      if (m) drow.appendChild(m);
      return !!m;
    };
    if (!adopt() && window.MutationObserver) {
      var mo = new MutationObserver(function () {
        if (adopt()) mo.disconnect();
      });
      mo.observe(dtop, { childList: true });
    }
  }

  // footer year follows the reader's clock (the snippet carries the year it was built in)
  var y = new Date().getFullYear();
  each('[data-kit-year]', function (e) {
    if (y > +e.textContent) e.textContent = String(y);
  });
  applyTheme(readTheme(), false);
  applyLanguagePref();
})();
