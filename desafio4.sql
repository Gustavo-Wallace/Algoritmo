create database tabelas;

create table Professor(
	prof_id int(4) not null auto_increment,
	nome varchar(30) not null,
    rua varchar(20) not null,
    cidade varchar(20) not null,
	primary key (prof_id)
);

create table Aluno(
	aluno_id int(4) not null auto_increment,
	nome varchar(30) not null,
    rua varchar(20) not null,
    cidade varchar(20) not null,
	primary key (aluno_id)
);

create table Disciplina(
	disc_id int(4) not null auto_increment,
    nome varchar(30) not null,
    qtd_aulas int(2) not null,
    primary key (disc_id)
)

create table Matricula(
	aluno_id int(4),
    prof_id int(4),
    ano int(4) not null,
    constraint fk_aluno foreign key(aluno_id) references Aluno(aluno_id),
    constraint fk_prof foreign key(prof_id) references Professor(prof_id),
)

create table Professor_Disciplina(
	disc_id int(4),
    prof_id int(4),
    ano int(4) not null,
    constraint fk_disc foreign key(disc_id) references Disciplina(dosc_id),
    constraint fk_prof foreign key(prof_id) references Professor(prof_id),
)