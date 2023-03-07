# Ejercicio 1
- Problema:

Debo hacer una especie de calculadora que logre calcular el costo de usar un espacio de trabajo y por cuánto tiempo, existiendo una oferta por mes.

- Entradas y salidas:

E: area_1 cantidad_de_días(<30)
S: cantidad_de_días * precio_de_area_1_diario
Fin

E: area_2 cantidad_de_días(>30)
S: cantidad_de_días / 30 * precio_de_area_2_mensual + precio_de_area_2_diario * (cantidad_de_días % 30)
Fin

E: area_3 cantidad_de_días(==0)
S: cantidad_de_días * precio_de_area_3_diario
Fin

-Pseudocódigo

IF area_introducida == area_1
    cantidad_de_días / 30 * precio_mes_area_1 + precio_diario_area_1 * (cantidad_de_dias % 30)

ELSE IF area_introducida == area_2
    cantidad_de_días / 30 * precio_mes_area_2 + precio_diario_area_2 * (cantidad_de_dias % 30)

ELSE IF area_introducida == area_3
    cantidad_de_días / 30 * precio_mes_area_3 + precio_diario_area_3 * (cantidad_de_dias % 30)

ELSE
    cout >> "número de area inválido, intente de nuevo."
