create database locadora;

create table cliente (
	cliente_id int(5) not null auto_increment,
    loja_id int(3),	
	primeiro_nome varchar(45) not null,
    ultimo_nome varchar(45) not null,
    email varchar(50) not null,
    endereco_id int(5),
    ativo int(1) not null,
    data_criacao datetime not null,
    ultima_atualizacao timestamp not null,
    primary key(cliente_id)
);

create table endereco (
	endereco_id int(5) not null auto_increment,
    endereco varchar(50) not null,
    endereco2 varchar(50) not null,
    bairro varchar(20) not null,
    cidade_id int(5),
    cep varchar(10) not null,
    telefone varchar(20) not null,
    ultima_atualizacao timestamp not null,
    primary key(endereco_id)
);

create table cidade (
	cidade_id int(5) not null auto_increment,
    cidade varchar(50) not null,
    pais_id int(5),
	ultima_atualizacao timestamp not null,
	primary key(cidade_id)
);

create table pais (
	pais_id int(5) not null auto_increment,
    pais varchar(50) not null,
	ultima_atualizacao timestamp not null,
	primary key(pais_id)
);

create table loja (
	loja_id int(3) not null auto_increment,
    gerente_id int(3) not null,
    endereco_id int(5),
	ultima_atualizacao timestamp not null,
	primary key(loja_id)
);

create table inventario (
	inventario_id int(8) not null auto_increment,
	filme_id int(5),
    loja_id int(3),
    ultima_atualizacao timestamp not null,
    primary key(inventario_id)
);

create table pagamento (
	pagamento_id int(5) not null auto_increment,
    cliente_id int(5),
    funcionario_id int(3),
    aluguel_id int(11),
    valor DECIMAL(5,2) not null,
    data_de_pagamento datetime not null,
    ultima_atualizacao timestamp not null,
	primary key(pagamento_id)
);

create table funcionario (
	funcionario_id int(3) not null auto_increment,
    primeiro_nome varchar(45) not null,
    ultimo_nome varchar(45) not null,
    endereco_id int(5),
    foto blob,
    email varchar(50) not null,
    loja_id int(3),
    ativo int(1) not null,
    usuario varchar(16) not null,
    senha varchar(40) not null,
    ultima_atualizacao timestamp not null,
    primary key(funcionario_id)
);

create table aluguel (
	aluguel_id int(11) not null auto_increment,
    data_de_aluguel datetime not null,
    inventario_id int(8),
    cliente_id int(5),
    data_de_devolucao datetime not null,
    funcionario_id int(3),
    ultima_atualizacao timestamp not null,
    primary key(aluguel_id)
);

create table filme (
	filme_id int(5) not null auto_increment,
    titulo varchar(255) not null,
    descricao text,
    ano_de_lancamento year(4) not null,
    idioma_id int(3),
    idioma_original_id int(3),
    duracao_da_locacao int(3) not null,
    preco_da_locacao decimal(4,2) not null,
    duracao_do_filme int(5) not null,
    custo_de_substituicao decimal(5,2) not null,
    cassificacao enum(...),
    recursos_especiais set(...),
    ultima_atualizacao timestamp not null
    primary key(filme_id)
);

create table idioma (
	idioma_id int(3) not null auto_increment,
    nome char(2) not null,
    ultima_atualizacao timestamp not null,
    primary key(idioma_id)
);

create table ator (
	ator_id int(5) not null auto_increment,
	primeiro_nome varchar(45) not null,
    ultimo_nome varchar(45) not null,
    ultima_atualizacao timestamp not null,
    primary key(ator_id)
);

create table filme_ator (
	ator_id int(5),
    filme_id int(5),
    ultima_atualizacao timestamp not null
);

create table categoria (
	categoria_id int(3) not null auto_increment,
    nome varchar(25) not null,
    ultima_atualizacao timestamp not null,
    primary key(categoria_id)
);

create table filme_categoria (
    filme_id int(5),
    categoria_id int(3),
    ultima_atualizacao timestamp not null
);

create table filme_texto (
	filme_id int(5),
    titulo varchar(255),
    descricao text
);