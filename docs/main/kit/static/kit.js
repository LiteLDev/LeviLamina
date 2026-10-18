/* levimc-kit vanilla runtime for static pages (no React): theme toggle + <details> menus.
   Include once, deferred:  <script src="kit.js" defer></script>
   The pre-paint theme script (theme-init.js) must run in <head> before this. */
(function () {
  'use strict';
  var KEY = 'levimc-theme';
  var root = document.documentElement;
  var mq = window.matchMedia ? window.matchMedia('(prefers-color-scheme: dark)') : null;
  var doxygen = root.classList.contains('dark-mode') || root.classList.contains('light-mode') || root.hasAttribute('data-kit-doxygen');

  function read() {
    try {
      var v = localStorage.getItem(KEY);
      return v === 'light' || v === 'dark' ? v : 'system';
    } catch (e) {
      return 'system';
    }
  }
  function sysDark() {
    return !!(mq && mq.matches);
  }
  function apply(pref, persist) {
    var dark = pref === 'dark' || (pref === 'system' && sysDark());
    root.classList.add('kit-no-transition');
    root.classList.toggle('dark', dark);
    if (doxygen) {
      root.classList.toggle('dark-mode', dark);
      root.classList.toggle('light-mode', !dark);
    }
    root.setAttribute('data-theme-pref', pref);
    root.style.colorScheme = dark ? 'dark' : 'light';
    if (persist) {
      try {
        if (pref === 'system') localStorage.removeItem(KEY);
        else localStorage.setItem(KEY, pref);
      } catch (e) {}
    }
    requestAnimationFrame(function () {
      requestAnimationFrame(function () {
        root.classList.remove('kit-no-transition');
      });
    });
    var label = { light: 'Light', dark: 'Dark', system: 'System' }[pref];
    document.querySelectorAll('[data-kit-theme-toggle]').forEach(function (b) {
      b.setAttribute('aria-label', 'Theme: ' + label + ' — Switch theme');
      b.setAttribute('title', 'Theme: ' + label + ' — Switch theme');
    });
  }
  function next(pref) {
    var sys = sysDark() ? 'dark' : 'light';
    if (pref === 'system') return sys === 'dark' ? 'light' : 'dark';
    if (pref === 'light') return sys === 'light' ? 'dark' : 'system';
    return sys === 'dark' ? 'light' : 'system';
  }

  document.addEventListener('click', function (e) {
    var t = e.target && e.target.closest ? e.target.closest('[data-kit-theme-toggle]') : null;
    if (t) {
      e.preventDefault();
      apply(next(read()), true);
    }
    // close <details class="kit-menu"> when clicking outside or following a link inside
    document.querySelectorAll('details.kit-menu[open]').forEach(function (d) {
      var inside = d.contains(e.target);
      var link = inside && e.target.closest && e.target.closest('a');
      if (!inside || link) d.open = false;
    });
  });
  document.addEventListener('keydown', function (e) {
    if (e.key !== 'Escape') return;
    document.querySelectorAll('details.kit-menu[open]').forEach(function (d) {
      d.open = false;
      var s = d.querySelector('summary');
      if (s) s.focus();
    });
  });
  document.addEventListener(
    'toggle',
    function (e) {
      var d = e.target;
      if (!d || !d.matches || !d.matches('details.kit-menu') || !d.open) return;
      document.querySelectorAll('details.kit-menu[open]').forEach(function (o) {
        if (o !== d) o.open = false;
      });
    },
    true,
  );
  if (mq && mq.addEventListener)
    mq.addEventListener('change', function () {
      if (read() === 'system') apply('system', false);
    });
  window.addEventListener('storage', function (e) {
    if (e.key === KEY) apply(read(), false);
  });
  apply(read(), false);
})();
