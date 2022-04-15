HANDLE WriteWofteam = OpenProcess(PROCESS_ALL_ACCESS, 0, GetCurrentProcessId());
DWORD Wofteambin;
BOOL WolfüActive = false;

	if (!WolfüActive)
	{
		Wofteambin = (DWORD)GetModuleHandle("Wofteam.bin");
		WolfüActive = TRUE;
	}