// LeviLamina docs (https://levimc.org/LeviLamina/), built with the vendored levimc-kit.
// Content lives in contents/ (x.md = English, x.zh.md = Chinese). Register new pages in `nav` below
// and their Chinese nav labels in `navTranslations.zh`. See kit/README.md for every option.
import { defineDocsConfig } from './kit/docs/node/config.ts';

// Pages that left this site keep answering at every URL they had: English, zh-Hans/, the former zh/ and zh-Hant/.
const TUTORIALS = 'https://levimc.org/tutorials/';
const BLOB = 'https://github.com/LiteLDev/LeviLamina/blob/main/';
/** A tutorial's URL per locale prefix of this site (Simplified and Traditional Chinese have their own). */
const tutorial = (path: string) => ({ en: TUTORIALS + path, zhHans: `${TUTORIALS}zh-Hans/${path}`, zhHant: `${TUTORIALS}zh-Hant/${path}` });
/** A contributor guide in the repository (docs/contributing/): English, and the Chinese text beside it. */
const repoFile = (file: string) => ({ en: BLOB + file, zhHans: BLOB + file.replace(/\.md$/, '.zh.md'), zhHant: BLOB + file.replace(/\.md$/, '.zh.md') });
function moved(pages: Record<string, { en: string; zhHans: string; zhHant: string }>): Record<string, string> {
  const out: Record<string, string> = {};
  for (const [from, to] of Object.entries(pages)) {
    out[from] = to.en;
    out[`zh-Hans/${from}`] = to.zhHans;
    out[`zh/${from}`] = to.zhHans;
    out[`zh-Hant/${from}`] = to.zhHant;
  }
  return out;
}

export default defineDocsConfig({
  base: '/LeviLamina/',
  // Header brand; page titles use the kit default ':title - :site Docs' ("Troubleshooting - LeviLamina Docs").
  title: 'LeviLamina',
  logo: 'logo.svg',
  favicon: 'favicon.ico',
  project: 'LeviLamina',
  repo: 'https://github.com/LiteLDev/LeviLamina',
  editLink: 'https://github.com/LiteLDev/LeviLamina/edit/main/docs/main/contents/:path',
  contentDir: 'contents',
  hostname: 'https://levimc.org',
  sitemap: { hostname: 'https://levimc.org' },
  i18n: {
    mode: 'suffix',
    defaultLocale: 'en',
    locales: [
      { code: 'en', label: 'English', lang: 'en' },
      // Simplified Chinese at zh-Hans/ (sources stay *.zh.md); the former zh/ URLs redirect to it (kit 2.21)
      { code: 'zh', label: '简体中文', lang: 'zh-Hans', prefix: 'zh-Hans/', formerPrefixes: ['zh/'] },
      // Traditional Chinese, generated from the zh pages (levimc-kit convertFrom)
      { code: 'zh-Hant', label: '繁體中文', lang: 'zh-Hant', convertFrom: 'zh' },
    ],
  },
  urlStyle: 'directory',
  slug: 'pymdownx',
  markdown: { compat: 'python-markdown', lineNumbers: true, codeTitle: 'pygments' },
  lastUpdated: true,
  sidebar: 'tabs',
  // The header row (logo + name, the sections, search, the repository icon) fits itself to the width (kit
  // `header.tabsRow` 'auto'): one row on wide screens, the sections in their own row below when they no longer fit,
  // then the drawer (opened by the LeviMC bar's menu button).
  // The LeviMC navigation model (kit/README.md "Navigation model"): every top-level entry is a section, i.e. a header
  // tab and the sidebar tree of its pages; the brand (logo + name) is the only link to the home page, which introduces
  // the project. Step-by-step tutorials (install a server, play with mods, your first mod) live at
  // https://levimc.org/tutorials/; this site keeps guides, reference and explanations. Help (FAQ, supported versions)
  // comes last. Sections with up to 24 links open every group; longer ones only the group holding the current page.
  nav: [
    {
      Guides: [
        { Server: ['common_guides/usage_guidelines.md', 'user_guides/troubleshooting.md'] },
        {
          Developer: [
            {
              'How-to Guides': [
                'developer_guides/how_to_guides/event_guide.md',
                'developer_guides/how_to_guides/interface_export_guide.md',
                'developer_guides/how_to_guides/find_function_guide.md',
                'developer_guides/how_to_guides/data_driven_ui_guide.md',
                'developer_guides/how_to_guides/form_guide.md',
                'developer_guides/how_to_guides/hook_guide.md',
                'developer_guides/how_to_guides/i18n_guide.md',
                'developer_guides/how_to_guides/item_guide.md',
                'developer_guides/how_to_guides/command_guide.md',
                'developer_guides/how_to_guides/coro_guide.md',
              ],
            },
            // Native mods for Minecraft on Android: loaded by LeviLauncher's Android version through the Preloader
            // SDK, not by LeviLamina (the tutorial is develop/first-android-mod/); titles are the pages' own.
            {
              'Android Native Mods API': [
                'developer_guides/android/api/mod.md',
                'developer_guides/android/api/mod_menu.md',
                'developer_guides/android/api/config.md',
                'developer_guides/android/api/input.md',
                'developer_guides/android/api/hook.md',
                'developer_guides/android/api/signature.md',
                'developer_guides/android/api/patch.md',
                'developer_guides/android/api/memory_hook_macros.md',
                'developer_guides/android/api/types_and_macros.md',
              ],
            },
            { Architecture: 'developer_guides/architecture.md' },
          ],
        },
        { Help: [{ FAQ: 'developer_guides/faq.md' }, { 'Supported Versions': 'versions.md' }] },
      ],
    },
    // Guides to LeviLamina's API by topic (URLs api_reference/…), next to the generated C++ reference below.
    {
      API: [
        { Overview: 'api_reference/index.md' },
        { Base: 'api_reference/base.md' },
        { Chrono: 'api_reference/chrono.md' },
        { Command: 'api_reference/command.md' },
        { Config: 'api_reference/config.md' },
        { Coroutine: 'api_reference/coro.md' },
        { Data: 'api_reference/data.md' },
        { 'Data-driven UI': 'api_reference/data_driven_ui.md' },
        { Event: 'api_reference/event.md' },
        { Expected: 'api_reference/expected.md' },
        { Form: 'api_reference/form.md' },
        { I18n: 'api_reference/i18n.md' },
        { 'IO & Logger': 'api_reference/io.md' },
        { 'Memory & Hook': 'api_reference/memory.md' },
        { Mod: 'api_reference/mod.md' },
        { Network: 'api_reference/network.md' },
        { Reflection: 'api_reference/reflection.md' },
        { 'Reflection (Advanced)': 'api_reference/reflection_advanced.md' },
        { Service: 'api_reference/service.md' },
        { Thread: 'api_reference/thread.md' },
        { Utils: 'api_reference/utils.md' },
        { 'Input (Client)': 'api_reference/input.md' },
      ],
    },
    // The Doxygen C++ reference, a section of this site with its own tree (opened in place, not a new tab): built by
    // the build-doxygen CI job and merged into dist/api/; its header is generated from dist/_kit/nav.json, with this
    // tab current.
    { 'C++ Reference': 'https://levimc.org/LeviLamina/api/' },
  ],
  // Moved pages. Tutorials went to levimc.org/tutorials/ (each locale to the tutorial's own locale); the contributor
  // guides (building LeviLamina, the C++ style) went to docs/contributing/ in the repository (see CONTRIBUTING.md).
  redirects: moved({
    'user_guides/install/': tutorial('server/first-server/'),
    'user_guides/install_on_docker/': tutorial('server/docker/'),
    'user_guides/install_on_client/': tutorial('play/play-with-mods/'),
    'user_guides/configure_server_under_nat/': tutorial('server/let-friends-join/'),
    'developer_guides/tutorials/create_your_first_mod/': tutorial('develop/first-levilamina-mod/'),
    'developer_guides/android/': tutorial('develop/first-android-mod/'),
    'developer_guides/how_to_guides/build_guide/': repoFile('docs/contributing/building.md'),
    'maintainer_guides/cpp_style_guide/': repoFile('docs/contributing/cpp_style.md'),
  }),
  navTranslations: {
    zh: {
      FAQ: '常见问题',
      Help: '帮助',
      Guides: '指南',
      Server: '服务器',
      Developer: '开发者',
      'How-to Guides': '如何做到······',
      'Android Native Mods API': 'Android 原生模组 API',
      Architecture: '项目架构',
      API: 'API',
      'C++ Reference': 'C++ 参考',
      Overview: '概览',
      Base: '基础类型',
      Chrono: '游戏时间',
      Command: '命令系统',
      Config: '配置系统',
      Coroutine: '协程',
      Data: '数据结构',
      'Data-driven UI': '数据驱动 UI',
      Event: '事件系统',
      Expected: '错误处理',
      Form: '表单 UI',
      I18n: '国际化',
      'IO & Logger': '输入输出与日志',
      'Memory & Hook': '内存与钩子',
      Mod: '模组系统',
      Network: '网络',
      Reflection: '反射',
      'Reflection (Advanced)': '反射（进阶）',
      Service: '服务系统',
      Thread: '线程工具',
      Utils: '工具函数',
      'Input (Client)': '输入系统（客户端）',
      'Supported Versions': '支持的版本',
    },
  },
});
