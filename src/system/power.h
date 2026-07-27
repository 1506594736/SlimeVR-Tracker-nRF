#ifndef SLIMENRF_SYSTEM_POWER
#define SLIMENRF_SYSTEM_POWER

void sys_interface_suspend(void);
void sys_interface_resume(void);

void sys_request_WOM(bool, bool);
void sys_request_system_off(bool);
void sys_request_system_reboot(bool);

/* Sensor rail off while retaining ESB polling; wake returns through a cold reboot. */
void sys_request_wireless_standby(void);
void sys_request_wireless_wake(void);
bool sys_wireless_standby_active(void);

bool vin_read(void);
bool vbus_read(void);

#endif
