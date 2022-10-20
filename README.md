# CANBUS_Tribeca
## Hardware
<p>Это модуль состоящий из Arduino и платы MCP2515 на 8MHz кварце с Ali.</p>
<p>Все подключается достаточно просто.</p>
<img src="./img/arduino-mcp2515-connection-sheme.jpg" alt="Схема подключения модуля MCP2515 к Arduino NANO" >
<p>При этом можно подключать к пинам Arduino D0(Tx) и D1(Rx) другие модули для чтения данных по UART порту.</p>

## Sowtvare
<p>В текущей версии прошивки в Serail порт (на USB и на ноги D0(Tx) и D1(Rx)) отправляются все данные принимаемые из CAN шины без каких либо фильтраций.</p>
