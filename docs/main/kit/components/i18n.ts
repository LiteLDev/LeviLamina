// UI strings for the shared chrome (GlobalBar, SiteFooter, theme/locale controls) and the docs engine UI.
// Content (page text, nav titles) is never translated here — only chrome.

export const UI_LOCALES = ['en', 'zh-CN', 'zh-HK', 'es', 'ru', 'de', 'ja', 'ko', 'fr'] as const;
export type UiLocale = (typeof UI_LOCALES)[number];

export interface UiStrings {
  // global bar / network
  network: string;
  home: string;
  projects: string;
  docs: string;
  /** Top-bar / footer label of pkg.levimc.org ("Mods"; the id stays `packages`). */
  packages: string;
  community: string;
  blog: string;
  about: string;
  github: string;
  menu: string;
  close: string;
  // footer
  tagline: string;
  footerDocs: string;
  footerEcosystem: string;
  footerConnect: string;
  email: string;
  notAffiliated: string;
  rights: string;
  // theme & locale
  theme: string;
  themeLight: string;
  themeDark: string;
  /** kit 1.0 label of the follow-the-system state (kept for overrides; the switcher shows `themeAuto`). */
  themeSystem: string;
  themeAuto: string;
  switchTheme: string;
  language: string;
  // docs UI
  skipToContent: string;
  search: string;
  searchPlaceholder: string;
  searchNoResults: string;
  searchLoading: string;
  searchNavigate: string;
  searchSelect: string;
  searchClose: string;
  onThisPage: string;
  previous: string;
  next: string;
  editPage: string;
  lastUpdated: string;
  backToTop: string;
  sidebarNav: string;
  mainNav: string;
  notFoundTitle: string;
  notFoundText: string;
  goHome: string;
  copyCode: string;
  copied: string;
  external: string;
  /** Display name of pkg.levimc.org ("LeviMC Mods"). */
  modsName: string;
  /** One-line description of pkg.levimc.org. */
  modsBlurb: string;
  /** Short description of each docs project, keyed by project id. */
  projectBlurbs: Record<string, string>;
}

const en: UiStrings = {
  network: 'LeviMC network',
  home: 'Home',
  projects: 'Projects',
  docs: 'Docs',
  packages: 'Mods',
  community: 'Community',
  blog: 'Blog',
  about: 'About',
  github: 'GitHub',
  menu: 'Menu',
  close: 'Close',
  tagline: 'Open-source modding for Minecraft Bedrock Edition — mod loader, script engine, package manager and launchers.',
  footerDocs: 'Documentation',
  footerEcosystem: 'Ecosystem',
  footerConnect: 'Connect',
  email: 'Email',
  notAffiliated: 'Not affiliated with Mojang Studios.',
  rights: 'LeviMC',
  theme: 'Theme',
  themeLight: 'Light',
  themeDark: 'Dark',
  themeSystem: 'System',
  themeAuto: 'Auto',
  switchTheme: 'Switch theme',
  language: 'Language',
  skipToContent: 'Skip to content',
  search: 'Search',
  searchPlaceholder: 'Search the docs…',
  searchNoResults: 'No results for',
  searchLoading: 'Loading search index…',
  searchNavigate: 'to navigate',
  searchSelect: 'to select',
  searchClose: 'to close',
  onThisPage: 'On this page',
  previous: 'Previous',
  next: 'Next',
  editPage: 'Edit this page on GitHub',
  lastUpdated: 'Last updated',
  backToTop: 'Back to top',
  sidebarNav: 'Section navigation',
  mainNav: 'Main navigation',
  notFoundTitle: 'This page wandered off',
  notFoundText: 'Your compass is spinning — the page you are looking for does not exist or has moved.',
  goHome: 'Back to the docs home',
  copyCode: 'Copy code',
  copied: 'Copied!',
  external: 'opens in a new tab',
  modsName: 'LeviMC Mods',
  modsBlurb: 'Mods and plugins for LeviLamina, ready to install with lip',
  projectBlurbs: {
    LeviLamina: 'Mod loader for Bedrock Dedicated Server',
    LegacyScriptEngine: 'Script engine for legacy LLSE plugins',
    lip: 'General-purpose package installer',
    LeviLauncher: 'Bedrock (GDK) launcher for Windows',
    LeviLaunchroid: 'Bedrock launcher for Android',
  },
};

const zhCN: UiStrings = {
  network: 'LeviMC 站点导航',
  home: '首页',
  projects: '项目',
  docs: '文档',
  packages: '模组',
  community: '社区',
  blog: '博客',
  about: '关于',
  github: 'GitHub',
  menu: '菜单',
  close: '关闭',
  tagline: '面向 Minecraft 基岩版的开源模组生态——模组加载器、脚本引擎、包管理器与启动器。',
  footerDocs: '文档',
  footerEcosystem: '生态',
  footerConnect: '联系我们',
  email: '邮箱',
  notAffiliated: '与 Mojang Studios 无关联。',
  rights: 'LeviMC',
  theme: '主题',
  themeLight: '浅色',
  themeDark: '深色',
  themeSystem: '跟随系统',
  themeAuto: '自动',
  switchTheme: '切换主题',
  language: '语言',
  skipToContent: '跳到正文',
  search: '搜索',
  searchPlaceholder: '搜索文档…',
  searchNoResults: '没有找到结果：',
  searchLoading: '正在加载搜索索引…',
  searchNavigate: '切换',
  searchSelect: '打开',
  searchClose: '关闭',
  onThisPage: '本页目录',
  previous: '上一页',
  next: '下一页',
  editPage: '在 GitHub 上编辑此页',
  lastUpdated: '最后更新于',
  backToTop: '返回顶部',
  sidebarNav: '章节导航',
  mainNav: '主导航',
  notFoundTitle: '这个页面走丢了',
  notFoundText: '指南针在原地打转——你要找的页面不存在或已被移动。',
  goHome: '返回文档首页',
  copyCode: '复制代码',
  copied: '已复制！',
  external: '在新标签页中打开',
  modsName: 'LeviMC 模组',
  modsBlurb: 'LeviLamina 的模组与插件，可用 lip 一键安装',
  projectBlurbs: {
    LeviLamina: '基岩版专用服务器模组加载器',
    LegacyScriptEngine: '运行旧版 LLSE 插件的脚本引擎',
    lip: '通用包管理器',
    LeviLauncher: 'Windows 基岩版（GDK）启动器',
    LeviLaunchroid: 'Android 基岩版启动器',
  },
};

const zhHK: UiStrings = {
  ...zhCN,
  network: 'LeviMC 網站導覽',
  home: '首頁',
  projects: '專案',
  docs: '文檔',
  packages: '模組',
  community: '社群',
  blog: '網誌',
  about: '關於',
  menu: '選單',
  close: '關閉',
  tagline: '面向 Minecraft 基岩版的開源模組生態——模組載入器、腳本引擎、套件管理器與啟動器。',
  footerDocs: '文檔',
  footerEcosystem: '生態',
  footerConnect: '聯絡我們',
  email: '電郵',
  notAffiliated: '與 Mojang Studios 無關聯。',
  theme: '主題',
  themeLight: '淺色',
  themeDark: '深色',
  themeSystem: '跟隨系統',
  themeAuto: '自動',
  switchTheme: '切換主題',
  language: '語言',
  skipToContent: '跳到正文',
  search: '搜尋',
  searchPlaceholder: '搜尋文檔…',
  searchNoResults: '找不到結果：',
  searchLoading: '正在載入搜尋索引…',
  searchNavigate: '切換',
  searchSelect: '開啟',
  searchClose: '關閉',
  onThisPage: '本頁目錄',
  previous: '上一頁',
  next: '下一頁',
  editPage: '在 GitHub 上編輯此頁',
  lastUpdated: '最後更新於',
  backToTop: '返回頂部',
  sidebarNav: '章節導覽',
  mainNav: '主導覽',
  notFoundTitle: '這個頁面走失了',
  notFoundText: '指南針在原地打轉——你要找的頁面不存在或已被移動。',
  goHome: '返回文檔首頁',
  copyCode: '複製程式碼',
  copied: '已複製！',
  external: '在新分頁中開啟',
  modsName: 'LeviMC 模組',
  modsBlurb: 'LeviLamina 的模組與插件，可用 lip 一鍵安裝',
  projectBlurbs: {
    LeviLamina: '基岩版專用伺服器模組載入器',
    LegacyScriptEngine: '執行舊版 LLSE 外掛的腳本引擎',
    lip: '通用套件管理器',
    LeviLauncher: 'Windows 基岩版（GDK）啟動器',
    LeviLaunchroid: 'Android 基岩版啟動器',
  },
};

const es: UiStrings = {
  network: 'Red LeviMC',
  home: 'Inicio',
  projects: 'Proyectos',
  docs: 'Documentación',
  packages: 'Mods',
  community: 'Comunidad',
  blog: 'Blog',
  about: 'Acerca de',
  github: 'GitHub',
  menu: 'Menú',
  close: 'Cerrar',
  tagline: 'Modding de código abierto para Minecraft Bedrock Edition: cargador de mods, motor de scripts, gestor de paquetes y lanzadores.',
  footerDocs: 'Documentación',
  footerEcosystem: 'Ecosistema',
  footerConnect: 'Contacto',
  email: 'Correo',
  notAffiliated: 'No afiliado a Mojang Studios.',
  rights: 'LeviMC',
  theme: 'Tema',
  themeLight: 'Claro',
  themeDark: 'Oscuro',
  themeSystem: 'Sistema',
  themeAuto: 'Automático',
  switchTheme: 'Cambiar tema',
  language: 'Idioma',
  skipToContent: 'Saltar al contenido',
  search: 'Buscar',
  searchPlaceholder: 'Buscar en la documentación…',
  searchNoResults: 'Sin resultados para',
  searchLoading: 'Cargando el índice de búsqueda…',
  searchNavigate: 'para moverte',
  searchSelect: 'para abrir',
  searchClose: 'para cerrar',
  onThisPage: 'En esta página',
  previous: 'Anterior',
  next: 'Siguiente',
  editPage: 'Editar esta página en GitHub',
  lastUpdated: 'Última actualización',
  backToTop: 'Volver arriba',
  sidebarNav: 'Navegación de la sección',
  mainNav: 'Navegación principal',
  notFoundTitle: 'Esta página se ha perdido',
  notFoundText: 'Tu brújula da vueltas: la página que buscas no existe o se ha movido.',
  goHome: 'Volver al inicio de la documentación',
  copyCode: 'Copiar código',
  copied: '¡Copiado!',
  external: 'se abre en una pestaña nueva',
  modsName: 'LeviMC Mods',
  modsBlurb: 'Mods y plugins para LeviLamina, listos para instalar con lip',
  projectBlurbs: {
    LeviLamina: 'Cargador de mods para Bedrock Dedicated Server',
    LegacyScriptEngine: 'Motor de scripts para plugins LLSE heredados',
    lip: 'Instalador de paquetes de uso general',
    LeviLauncher: 'Lanzador de Bedrock (GDK) para Windows',
    LeviLaunchroid: 'Lanzador de Bedrock para Android',
  },
};

const ru: UiStrings = {
  network: 'Сеть LeviMC',
  home: 'Главная',
  projects: 'Проекты',
  docs: 'Документация',
  packages: 'Моды',
  community: 'Сообщество',
  blog: 'Блог',
  about: 'О нас',
  github: 'GitHub',
  menu: 'Меню',
  close: 'Закрыть',
  tagline: 'Моддинг Minecraft Bedrock Edition с открытым исходным кодом: загрузчик модов, скриптовый движок, менеджер пакетов и лаунчеры.',
  footerDocs: 'Документация',
  footerEcosystem: 'Экосистема',
  footerConnect: 'Связь',
  email: 'Почта',
  notAffiliated: 'Не связано с Mojang Studios.',
  rights: 'LeviMC',
  theme: 'Тема',
  themeLight: 'Светлая',
  themeDark: 'Тёмная',
  themeSystem: 'Системная',
  themeAuto: 'Авто',
  switchTheme: 'Сменить тему',
  language: 'Язык',
  skipToContent: 'Перейти к содержимому',
  search: 'Поиск',
  searchPlaceholder: 'Поиск по документации…',
  searchNoResults: 'Ничего не найдено по запросу',
  searchLoading: 'Загрузка поискового индекса…',
  searchNavigate: 'навигация',
  searchSelect: 'открыть',
  searchClose: 'закрыть',
  onThisPage: 'На этой странице',
  previous: 'Назад',
  next: 'Далее',
  editPage: 'Редактировать на GitHub',
  lastUpdated: 'Обновлено',
  backToTop: 'Наверх',
  sidebarNav: 'Навигация по разделу',
  mainNav: 'Основная навигация',
  notFoundTitle: 'Эта страница потерялась',
  notFoundText: 'Компас крутится на месте: страница не существует или была перемещена.',
  goHome: 'На главную документации',
  copyCode: 'Копировать код',
  copied: 'Скопировано!',
  external: 'откроется в новой вкладке',
  modsName: 'LeviMC Mods',
  modsBlurb: 'Моды и плагины для LeviLamina, устанавливаются через lip',
  projectBlurbs: {
    LeviLamina: 'Загрузчик модов для Bedrock Dedicated Server',
    LegacyScriptEngine: 'Скриптовый движок для плагинов LLSE',
    lip: 'Универсальный установщик пакетов',
    LeviLauncher: 'Лаунчер Bedrock (GDK) для Windows',
    LeviLaunchroid: 'Лаунчер Bedrock для Android',
  },
};

const de: UiStrings = {
  network: 'LeviMC-Netzwerk',
  home: 'Startseite',
  projects: 'Projekte',
  docs: 'Dokumentation',
  packages: 'Mods',
  community: 'Community',
  blog: 'Blog',
  about: 'Über uns',
  github: 'GitHub',
  menu: 'Menü',
  close: 'Schließen',
  tagline: 'Open-Source-Modding für Minecraft Bedrock Edition – Mod-Loader, Skript-Engine, Paketmanager und Launcher.',
  footerDocs: 'Dokumentation',
  footerEcosystem: 'Ökosystem',
  footerConnect: 'Kontakt',
  email: 'E-Mail',
  notAffiliated: 'Nicht mit Mojang Studios verbunden.',
  rights: 'LeviMC',
  theme: 'Design',
  themeLight: 'Hell',
  themeDark: 'Dunkel',
  themeSystem: 'System',
  themeAuto: 'Automatisch',
  switchTheme: 'Design wechseln',
  language: 'Sprache',
  skipToContent: 'Zum Inhalt springen',
  search: 'Suche',
  searchPlaceholder: 'Dokumentation durchsuchen…',
  searchNoResults: 'Keine Ergebnisse für',
  searchLoading: 'Suchindex wird geladen…',
  searchNavigate: 'navigieren',
  searchSelect: 'öffnen',
  searchClose: 'schließen',
  onThisPage: 'Auf dieser Seite',
  previous: 'Zurück',
  next: 'Weiter',
  editPage: 'Diese Seite auf GitHub bearbeiten',
  lastUpdated: 'Zuletzt aktualisiert',
  backToTop: 'Nach oben',
  sidebarNav: 'Abschnittsnavigation',
  mainNav: 'Hauptnavigation',
  notFoundTitle: 'Diese Seite hat sich verlaufen',
  notFoundText: 'Dein Kompass dreht sich – die gesuchte Seite existiert nicht oder wurde verschoben.',
  goHome: 'Zur Startseite der Dokumentation',
  copyCode: 'Code kopieren',
  copied: 'Kopiert!',
  external: 'öffnet in einem neuen Tab',
  modsName: 'LeviMC Mods',
  modsBlurb: 'Mods und Plugins für LeviLamina, installierbar mit lip',
  projectBlurbs: {
    LeviLamina: 'Mod-Loader für Bedrock Dedicated Server',
    LegacyScriptEngine: 'Skript-Engine für ältere LLSE-Plugins',
    lip: 'Universeller Paketinstaller',
    LeviLauncher: 'Bedrock-(GDK-)Launcher für Windows',
    LeviLaunchroid: 'Bedrock-Launcher für Android',
  },
};

const ja: UiStrings = {
  network: 'LeviMC ネットワーク',
  home: 'ホーム',
  projects: 'プロジェクト',
  docs: 'ドキュメント',
  packages: 'MOD',
  community: 'コミュニティ',
  blog: 'ブログ',
  about: '概要',
  github: 'GitHub',
  menu: 'メニュー',
  close: '閉じる',
  tagline: 'Minecraft 統合版のためのオープンソース Mod 環境 — Mod ローダー、スクリプトエンジン、パッケージマネージャー、ランチャー。',
  footerDocs: 'ドキュメント',
  footerEcosystem: 'エコシステム',
  footerConnect: 'つながる',
  email: 'メール',
  notAffiliated: 'Mojang Studios とは関係ありません。',
  rights: 'LeviMC',
  theme: 'テーマ',
  themeLight: 'ライト',
  themeDark: 'ダーク',
  themeSystem: 'システム',
  themeAuto: '自動',
  switchTheme: 'テーマを切り替え',
  language: '言語',
  skipToContent: '本文へスキップ',
  search: '検索',
  searchPlaceholder: 'ドキュメントを検索…',
  searchNoResults: '検索結果なし：',
  searchLoading: '検索インデックスを読み込み中…',
  searchNavigate: '移動',
  searchSelect: '開く',
  searchClose: '閉じる',
  onThisPage: 'このページの内容',
  previous: '前へ',
  next: '次へ',
  editPage: 'GitHub でこのページを編集',
  lastUpdated: '最終更新',
  backToTop: 'トップへ戻る',
  sidebarNav: 'セクションナビゲーション',
  mainNav: 'メインナビゲーション',
  notFoundTitle: 'このページは迷子になりました',
  notFoundText: 'コンパスがくるくる回っています。お探しのページは存在しないか、移動しました。',
  goHome: 'ドキュメントのホームへ',
  copyCode: 'コードをコピー',
  copied: 'コピーしました！',
  external: '新しいタブで開きます',
  modsName: 'LeviMC Mods',
  modsBlurb: 'LeviLamina 用の MOD とプラグイン（lip でインストール）',
  projectBlurbs: {
    LeviLamina: 'Bedrock Dedicated Server 用 Mod ローダー',
    LegacyScriptEngine: '旧 LLSE プラグイン用スクリプトエンジン',
    lip: '汎用パッケージインストーラー',
    LeviLauncher: 'Windows 向け統合版（GDK）ランチャー',
    LeviLaunchroid: 'Android 向け統合版ランチャー',
  },
};

const ko: UiStrings = {
  network: 'LeviMC 네트워크',
  home: '홈',
  projects: '프로젝트',
  docs: '문서',
  packages: '모드',
  community: '커뮤니티',
  blog: '블로그',
  about: '소개',
  github: 'GitHub',
  menu: '메뉴',
  close: '닫기',
  tagline: 'Minecraft 베드락 에디션을 위한 오픈 소스 모딩 — 모드 로더, 스크립트 엔진, 패키지 관리자, 런처.',
  footerDocs: '문서',
  footerEcosystem: '생태계',
  footerConnect: '연결',
  email: '이메일',
  notAffiliated: 'Mojang Studios와 관련이 없습니다.',
  rights: 'LeviMC',
  theme: '테마',
  themeLight: '라이트',
  themeDark: '다크',
  themeSystem: '시스템',
  themeAuto: '자동',
  switchTheme: '테마 전환',
  language: '언어',
  skipToContent: '본문으로 건너뛰기',
  search: '검색',
  searchPlaceholder: '문서 검색…',
  searchNoResults: '검색 결과 없음:',
  searchLoading: '검색 색인을 불러오는 중…',
  searchNavigate: '이동',
  searchSelect: '열기',
  searchClose: '닫기',
  onThisPage: '이 페이지의 내용',
  previous: '이전',
  next: '다음',
  editPage: 'GitHub에서 이 페이지 편집',
  lastUpdated: '마지막 업데이트',
  backToTop: '맨 위로',
  sidebarNav: '섹션 탐색',
  mainNav: '주 탐색',
  notFoundTitle: '이 페이지는 길을 잃었습니다',
  notFoundText: '나침반이 빙글빙글 돌고 있어요. 찾는 페이지가 없거나 이동되었습니다.',
  goHome: '문서 홈으로',
  copyCode: '코드 복사',
  copied: '복사됨!',
  external: '새 탭에서 열림',
  modsName: 'LeviMC Mods',
  modsBlurb: 'lip으로 설치하는 LeviLamina용 모드와 플러그인',
  projectBlurbs: {
    LeviLamina: 'Bedrock Dedicated Server용 모드 로더',
    LegacyScriptEngine: '레거시 LLSE 플러그인용 스크립트 엔진',
    lip: '범용 패키지 설치 도구',
    LeviLauncher: 'Windows용 베드락(GDK) 런처',
    LeviLaunchroid: 'Android용 베드락 런처',
  },
};

const fr: UiStrings = {
  network: 'Réseau LeviMC',
  home: 'Accueil',
  projects: 'Projets',
  docs: 'Documentation',
  packages: 'Mods',
  community: 'Communauté',
  blog: 'Blog',
  about: 'À propos',
  github: 'GitHub',
  menu: 'Menu',
  close: 'Fermer',
  tagline: 'Modding open source pour Minecraft Bedrock Edition : chargeur de mods, moteur de scripts, gestionnaire de paquets et lanceurs.',
  footerDocs: 'Documentation',
  footerEcosystem: 'Écosystème',
  footerConnect: 'Nous suivre',
  email: 'E-mail',
  notAffiliated: 'Non affilié à Mojang Studios.',
  rights: 'LeviMC',
  theme: 'Thème',
  themeLight: 'Clair',
  themeDark: 'Sombre',
  themeSystem: 'Système',
  themeAuto: 'Automatique',
  switchTheme: 'Changer de thème',
  language: 'Langue',
  skipToContent: 'Aller au contenu',
  search: 'Rechercher',
  searchPlaceholder: 'Rechercher dans la documentation…',
  searchNoResults: 'Aucun résultat pour',
  searchLoading: 'Chargement de l’index de recherche…',
  searchNavigate: 'pour naviguer',
  searchSelect: 'pour ouvrir',
  searchClose: 'pour fermer',
  onThisPage: 'Sur cette page',
  previous: 'Précédent',
  next: 'Suivant',
  editPage: 'Modifier cette page sur GitHub',
  lastUpdated: 'Dernière mise à jour',
  backToTop: 'Retour en haut',
  sidebarNav: 'Navigation de la section',
  mainNav: 'Navigation principale',
  notFoundTitle: 'Cette page s’est égarée',
  notFoundText: 'Votre boussole tourne en rond : la page recherchée n’existe pas ou a été déplacée.',
  goHome: 'Retour à l’accueil de la documentation',
  copyCode: 'Copier le code',
  copied: 'Copié !',
  external: 's’ouvre dans un nouvel onglet',
  modsName: 'LeviMC Mods',
  modsBlurb: 'Mods et plugins pour LeviLamina, à installer avec lip',
  projectBlurbs: {
    LeviLamina: 'Chargeur de mods pour Bedrock Dedicated Server',
    LegacyScriptEngine: 'Moteur de scripts pour les plugins LLSE historiques',
    lip: 'Installateur de paquets polyvalent',
    LeviLauncher: 'Lanceur Bedrock (GDK) pour Windows',
    LeviLaunchroid: 'Lanceur Bedrock pour Android',
  },
};

export const UI_STRINGS: Record<UiLocale, UiStrings> = {
  en,
  'zh-CN': zhCN,
  'zh-HK': zhHK,
  es,
  ru,
  de,
  ja,
  ko,
  fr,
};

/**
 * Map any BCP-47 tag (or a site locale code such as "zh", "zh-TW", "es-ES") to one of the 9 UI locales.
 * Traditional Chinese variants (zh-HK, zh-TW, zh-MO, zh-Hant) → zh-HK; other zh → zh-CN; else primary subtag.
 */
export function resolveUiLocale(tag: string | undefined | null): UiLocale {
  if (!tag) return 'en';
  const t = tag.toLowerCase();
  if (t.startsWith('zh')) {
    return /^zh[-_](hk|tw|mo|hant)/.test(t) ? 'zh-HK' : 'zh-CN';
  }
  const primary = t.split(/[-_]/)[0];
  const hit = UI_LOCALES.find((l) => l === primary);
  return hit ?? 'en';
}

export function uiStrings(tag: string | undefined | null, overrides?: Partial<UiStrings>): UiStrings {
  const base = UI_STRINGS[resolveUiLocale(tag)];
  return overrides ? { ...base, ...overrides, projectBlurbs: { ...base.projectBlurbs, ...overrides.projectBlurbs } } : base;
}

/** Native names of the UI locales (the chrome's language menu lists each in its own language). */
export const UI_LOCALE_NAMES: Record<UiLocale, string> = {
  en: 'English',
  'zh-CN': '简体中文',
  'zh-HK': '繁體中文',
  es: 'Español',
  ru: 'Русский',
  de: 'Deutsch',
  ja: '日本語',
  ko: '한국어',
  fr: 'Français',
};
