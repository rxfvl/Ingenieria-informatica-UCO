select l.nombre,
    100*(select count(dni) from votantes where estudiosSuperiores = 'Doctorado' and localidad = v.localidad)/count(dni) as "Doctorado",
    100*(select count(dni) from votantes where estudiosSuperiores = 'Superiores' and localidad = v.localidad)/count(dni) as "Superiores",
    100*(select count(dni) from votantes where estudiosSuperiores = 'Basicos' and localidad = v.localidad)/count(dni) as "Basicos",
    100*(select count(dni) from votantes where estudiosSuperiores = 'Ninguno' and localidad = v.localidad)/count(dni) as "Ninguno"

from localidades l, votantes v
where l.idlocalidad = v.localidad
group by l.nombre, v.localidad;