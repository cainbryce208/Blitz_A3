switch true do {
    case "isDedicated": { "decicated" };
    case "isServer": { "server" };
    case "!(hasInterface && isDedicated)":{ "headless"};
}